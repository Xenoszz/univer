#include <iostream>
#include <vector>
#include <stack>
#include <iomanip>

#define MAX_N 1000
#define INFINITY 100000

using namespace std;

vector<int> adj[MAX_N];
vector<int> length[MAX_N];

int n, m;
int d[MAX_N];
bool scanned[MAX_N];

// ���� vector �����红�������鹷ҧ�����鹷���ش
vector<int> shortest_path[MAX_N];

void read_input() {
    int u, v, w;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        u--; v--;

        adj[u].push_back(v);
        length[u].push_back(w);

        adj[v].push_back(u);
        length[v].push_back(w);
    }
}

void dijkstra(int s) {
    for (int u = 0; u < n; u++) {
        d[u] = INFINITY;
        scanned[u] = false;
    }
    d[s] = 0;

    for (int i = 0; i < n; i++) {
        int bestu = -1;

        for (int u = 0; u < n; u++) {
            if (!scanned[u]) {
                if ((bestu == -1) || (d[bestu] > d[u])) {
                    bestu = u;
                }
            }
        }

        int deg = adj[bestu].size();
        for (int i = 0; i < deg; i++) {
            int v = adj[bestu][i];
            int len = length[bestu][i];

            if (d[bestu] + len < d[v]) {
                d[v] = d[bestu] + len;

                // �红�������鹷ҧ�����鹷���ش
                shortest_path[v] = shortest_path[bestu];
                shortest_path[v].push_back(v);
            }
        }

        scanned[bestu] = true;
    }
}

int main() {
    read_input();
    dijkstra(0);

    // �ʴ����Ѿ�����зҧ�����鹷���ش��ѧ�ء�˹�
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < shortest_path[i].size(); j++) {
    		cout << shortest_path[i][j] << " -> ";
		}
        cout << setw(1) << i + 1 << setw(30) <<" (Distance: " << d[i] << ")" << endl;
    }

    return 0;
}
/*
4 5
1 2 5
1 3 8
2 3 9
2 4 2
3 4 6
*/
