#include <iostream>
#include <climits>
#include <vector>

using namespace std;

void primMST(int V, vector<vector<int> >& graph);
int minKey(vector<int>& key, vector<bool>& mstSet);
void printMST(int V, vector<int>& parent, vector<vector<int> >& graph);

int main() {
    int V, m, i;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> m;
    vector<vector<int> > graph(V, vector<int>(V, 0));

    cout << "Enter the edges and weights (separated by spaces):\n";
    for (i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;

        graph[u][v] = w;
        graph[v][u] = w;
    }

    primMST(V, graph);

    return 0;
}

void primMST(int V, vector<vector<int> >& graph) {
    vector<int> parent(V, -1);
    vector<int> key(V, INT_MAX);
    vector<bool> mstSet(V, false);

    key[0] = 0;

    int count, v;

    for (count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);

        mstSet[u] = true;

        for (v = 0; v < V; v++)
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
    }

    printMST(V, parent, graph);
}

int minKey(vector<int>& key, vector<bool>& mstSet) {
    int min = INT_MAX, min_index;
    int v;

    for (v = 0; v < key.size(); v++)
        if (!mstSet[v] && key[v] < min) {
            min = key[v];
            min_index = v;
        }

    return min_index;
}

void printMST(int V, vector<int>& parent, vector<vector<int> >& graph) {
    int sum = 0, i;
    char char_ans[100] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    cout << "Edge   Weight\n";
    for (i = 1; i < V; i++) {
        sum += graph[i][parent[i]];
        cout << char_ans[parent[i]] << " <=> " << char_ans[i] << "    " << graph[i][parent[i]] << endl;
    }
    cout << "Total Weight = " << sum << endl;
}

