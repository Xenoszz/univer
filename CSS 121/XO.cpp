#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct Node{
    int i, j;
    int size;
    int numnode = 0;
    string *table;
};

void display(const string &table){
    cout << "____" << endl;
    for (int i = 0; i < 9; i++){
        cout << table[i];
        if (i % 3 == 2){
            cout << endl;
        }
    }
}

bool checkwin(const string &table, char play){
    for (int i = 0; i < 3; i++){
        if (table[i * 3] == play && table[i * 3 + 1] == play && table[i * 3 + 2] == play){
            return true;
        }
        if (table[i] == play && table[i + 3] == play && table[i + 6] == play){
            return true;
        }
        if ((table[0] == play && table[4] == play && table[8] == play) || (table[2] == play && table[4] == play && table[6] == play)){
            return true;
        }
    }
    return false;
}

void table(queue<string> &xo, Node &tree){
    char p = ' ';
    int round = 0;
    string newboard;
    xo.push("---------");
    while (!xo.empty()){
        string mtable = xo.front();
        xo.pop();
        int numx = 0, numo = 1;
        for (int i = 0; i < 9; i++)
        {
            if (mtable[i] == 'X'){
                numx++;
            }
            else if (mtable[i] == 'O'){
                numo++;
            }
        }
        cout << "round : " << round << endl;
        round++;
        display(mtable);
        if (checkwin(mtable, 'X')){
            cout << "============= X Win "<< endl;
            continue;
        }
        else if (checkwin(mtable, 'O')){
            cout << "============= X Loss"<< endl;
            continue;
        }
        if (numo > numx){
            p = 'X';
        }
        else{
            p = 'O';
        }
        for (int i = 0; i < 9; i++){
            if (mtable[i] == '-'){  
                newboard = mtable;
                newboard[i] = p;
                tree.table[tree.numnode] = newboard;
                tree.numnode++;
                xo.push(newboard);
            }
        }
    }
}

int main(){
    queue<string> xo;
    Node node;
    node.size = 6000000;
    node.table = new string[node.size];
    table(xo, node);
    return 0;
}
