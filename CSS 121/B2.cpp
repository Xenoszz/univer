#include <iostream>

using namespace std;
struct Link
{
    string playerName;
    int score;
    Link *next;
    Link *prev;
    Link(const string &name, int num) : playerName(name), score(num), next(nullptr), prev(nullptr) {}
};

void removeLast(Link *&head, Link *&tail, int &size)
{
    if (!head)
    {
        return;
    }

    Link *toRemove = tail;
    if (tail->prev)
    {
        tail = tail->prev;
        tail->next = nullptr;
    }
    else
    {
        head = tail = nullptr;
    }

    delete toRemove;
    size--;
}

void sortScores(Link *head)
{
    Link *i = head;
    while (i)
    {
        Link *j = i->next;
        while (j)
        {
            if (i->score < j->score)
            {
                swap(i->playerName, j->playerName);
                swap(i->score, j->score);
            }
            j = j->next;
        }
        i = i->next;
    }
}

void addScore(Link *&head, Link *&tail, int &size, const string &playerName, int score)
{
    Link *newLink = new Link(playerName, score);

    if (!head)
    {
        head = tail = newLink;
    }
    else
    {
        Link *current = head;
        while (current && score < current->score)
        {
            current = current->next;
        }

        if (!current)
        {

            tail->next = newLink;
            newLink->prev = tail;
            tail = newLink;
        }
        else
        {

            newLink->next = current;
            newLink->prev = current->prev;

            if (current->prev)
            {
                current->prev->next = newLink;
            }
            else
            {
                head = newLink;
            }
            current->prev = newLink;
        }
    }
    while (size >= 10)
    {
        removeLast(head, tail, size);
    }
    size++;
    sortScores(head);
}
void display(Link *head)
{
    Link *current = head;
    while (current)
    {
        cout << current->playerName << ": " << current->score << endl;
        current = current->next;
    }
    cout << endl;
}
int main()
{
    Link *head = nullptr;
    Link *tail = nullptr;
    int size = 0;
    string name;
    int score;
    addScore(head, tail, size, "Player1", 100);
    addScore(head, tail, size, "Player2", 80);
    addScore(head, tail, size, "Player3", 40);
    addScore(head, tail, size, "Player4", 90);
    addScore(head, tail, size, "Player5", 95);
    addScore(head, tail, size, "Player6", 88);
    addScore(head, tail, size, "Player7", 95);
    addScore(head, tail, size, "Player8", 67);
    addScore(head, tail, size, "Player9", 85);
    addScore(head, tail, size, "Player10", 50);
    addScore(head, tail, size, "Player11", 70);
    addScore(head, tail, size, "Player12", 78);
    addScore(head, tail, size, "Player13", 79);
    addScore(head, tail, size, "Player14", 81);
    display(head);
    return 0;
};
