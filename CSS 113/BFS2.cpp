#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> G[30];

void bfs(queue<int>& q, vector<int>& levels);

int main() {
    int n, x, y;
    int maxNode = 0;

    cout << "Enter the number of edges: ";
    cin >> n;

    cout << "Enter the edges (start end):" << endl;
    while (n--) {
        cin >> x >> y;
        G[x].push_back(y);
        maxNode = max(maxNode, max(x, y));
    }

    int startNode;
    cout << "Enter the starting node: ";
    cin >> startNode;

    if (startNode >= 0 && startNode <= maxNode) {
        queue<int> q;
        vector<int> levels(maxNode + 1, -1); 

        q.push(startNode);
        levels[startNode] = 1; 


        cout << "Levels:" << endl;
        for (int level = 1; level <= maxNode; ++level) {
            cout << "Level " << level << " : ";
            for (int i = 0; i <= maxNode; ++i) {
                if (levels[i] == level) {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    } else {
        cout << "Invalid starting node." << endl;
    }

    return 0;
}

void bfs(queue<int>& q, vector<int>& levels) {
    while (!q.empty()) {
        int p = q.front();
        q.pop();

        for (int i = 0; i < G[p].size(); i++) {
            int neighbor = G[p][i];
            if (levels[neighbor] == -1) {
                q.push(neighbor);
                levels[neighbor] = levels[p] + 1;
            }
        }
    }
}

