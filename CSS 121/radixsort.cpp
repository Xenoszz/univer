#include <iostream>
#include <cmath>
using namespace std;

class Link
{
public:
    int element; // Value for this node
    Link *next;  // Pointer to next node in list
    // Constructors
    Link(int elemval, Link *nextval = NULL)
    {
        element = elemval;
        next = nextval;
    }
    Link(Link *nextval = NULL) { next = nextval; }
};

class LList
{
private:
    Link *head; // Pointer to list header
    Link *tail; // Pointer to last element
    Link *curr; // Access to current element
    int cnt;    // Size of list

    void init()
    { // Initialization helper method
        curr = tail = head = new Link();
        cnt = 0;
    }

    void removeall()
    { // Return link nodes to free store
        while (head != NULL)
        {
            curr = head;
            head = head->next;
            delete curr;
        }
    }

public:
    LList() { init(); }       // Constructor
    ~LList() { removeall(); } // Destructor
    void print() const;       // Print list contents
    void clear()
    {
        removeall();
        init();
    } // Clear list

    // Insert "it" at current position
    void insert(int it)
    {
        curr->next = new Link(it, curr->next);
        if (tail == curr)
            tail = curr->next; // New tail
        cnt++;
    }

    void append(int it)
    { // Append "it" to list
        tail = tail->next = new Link(it, NULL);
        cnt++;
    }

    // Remove and return current element
    int remove()
    {
        if (curr->next == NULL)
        {
            cout << "No element" << endl;
            return 0;
        }
        else
        {
            int it = curr->next->element; // Remember value
            Link *ltemp = curr->next;     // Remember link node
            if (tail == curr->next)
                tail = curr;               // Reset tail
            curr->next = curr->next->next; // Remove from list
            delete ltemp;                  // Reclaim space
            cnt--;                         // Decrement the count
            return it;
        }
    }

    void moveToStart() // Place curr at list start
    {
        curr = head;
    }

    void moveToEnd() // Place curr at list end
    {
        curr = tail;
    }

    // Move curr one step left; no change if already at front
    void prev()
    {
        if (curr == head)
            return; // No previous element
        Link *temp = head;
        // March down list until we find the previous element
        while (temp->next != curr)
            temp = temp->next;
        curr = temp;
    }

    // Move curr one step right; no change if already at end
    void next()
    {
        if (curr != tail)
            curr = curr->next;
    }

    int length() const { return cnt; } // Return length

    // Return the position of the current element
    int currPos() const
    {
        Link *temp = head;
        int i;
        for (i = 0; curr != temp; i++)
            temp = temp->next;
        return i;
    }

    // Move down list to "pos" position
    void moveToPos(int pos)
    {
        if ((pos < 0) || (pos > cnt))
        {
            cout << "Position out of range" << endl;
        }
        else
        {
            curr = head;
            for (int i = 0; i < pos; i++)
                curr = curr->next;
        }
    }

    int getValue() const
    { // Return current element
        if (curr->next == NULL)
        {
            cout << "No value" << endl;
        }
        else
        {
            return curr->next->element;
        }
    }
    void printList()
    {
        Link *temp = head->next;
        cout << "the list elements are " << endl;
        cout << "< ";

        for (int i = 0; i < cnt; i++)
        {
            cout << temp->element;
            if (temp == curr)
                cout << " | ";
            else if (temp != tail)
                cout << ", ";
            temp = temp->next;
        }
        cout << " >" << endl;
    }

    void Bucket(int digit)
    {

        int tempelement;
        int checkdigit;

        LList L0;
        LList L1;
        LList L2;
        LList L3;
        LList L4;
        LList L5;
        LList L6;
        LList L7;
        LList L8;
        LList L9;

        curr = head;
        while (curr->next != NULL)
        {
            tempelement = remove();
            checkdigit = tempelement / pow(10, digit - 1);
            checkdigit = checkdigit % 10;
            switch (checkdigit)
            {
            case 0:
                L0.append(tempelement);
                break;
            case 1:
                L1.append(tempelement);
                break;
            case 2:
                L2.append(tempelement);
                break;
            case 3:
                L3.append(tempelement);
                break;
            case 4:
                L4.append(tempelement);
                break;
            case 5:
                L5.append(tempelement);
                break;
            case 6:
                L6.append(tempelement);
                break;
            case 7:
                L7.append(tempelement);
                break;
            case 8:
                L8.append(tempelement);
                break;
            case 9:
                L9.append(tempelement);
                break;
            }
        }
        if (digit != 0)
        {
            L0.Bucket(digit - 1);
            L1.Bucket(digit - 1);
            L2.Bucket(digit - 1);
            L3.Bucket(digit - 1);
            L4.Bucket(digit - 1);
            L5.Bucket(digit - 1);
            L6.Bucket(digit - 1);
            L7.Bucket(digit - 1);
            L8.Bucket(digit - 1);
            L9.Bucket(digit - 1);
        }
        while (L0.curr->next != NULL)
        {
            append(L0.remove());
        }
        while (L1.curr->next != NULL)
        {
            append(L1.remove());
        }
        while (L2.curr->next != NULL)
        {
            append(L2.remove());
        }
        while (L3.curr->next != NULL)
        {
            append(L3.remove());
        }
        while (L4.curr->next != NULL)
        {
            append(L4.remove());
        }
        while (L5.curr->next != NULL)
        {
            append(L5.remove());
        }
        while (L6.curr->next != NULL)
        {
            append(L6.remove());
        }
        while (L7.curr->next != NULL)
        {
            append(L7.remove());
        }
        while (L8.curr->next != NULL)
        {
            append(L8.remove());
        }
        while (L9.curr->next != NULL)
        {
            append(L9.remove());
        }
    }
};

int main(int argc, char **argv)
{

    long x = 95498721;
    long y;
    y = x / pow(10, 5);

    cout << "6th digit = " << y % 10;

    LList L1;
    L1.printList();
    L1.insert(904);
    L1.insert(455);
    L1.insert(356);
    L1.insert(217);
    L1.insert(914);
    L1.insert(425);
    L1.insert(911);
    L1.insert(346);
    L1.insert(955);
    L1.insert(227);
    L1.printList();
    L1.Bucket(3);
    L1.printList();

    return 0;
}