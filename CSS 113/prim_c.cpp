#include <iostream>
#include <vector>

using namespace std;


struct Edge {
    int source, destination, weight;
};

// Function to add an edge to the graph
void addEdge(vector<vector<pair<int, int>>> &graph, int source, int destination, int weight) {
    graph[source].emplace_back(destination, weight);
    graph[destination].emplace_back(source, weight);
}

// Function to print the adjacency list representation of the graph
void printGraph(const vector<vector<pair<int, int>>> &graph) {
    cout << "Edge   Weight\n";
    for (int i = 1; i < graph.size(); ++i) {
        for (const auto &edge : graph[i]) {
            cout << i << " - " << edge.first << "   " << edge.second << "\n";
        }
    }
}

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edges;

    // Create a vector of vectors to represent the graph
    vector<vector<pair<int, int>>> graph(vertices + 1);

    // Input edges and weights
    cout << "Enter the edges and weights (separated by spaces):\n";
    for (int i = 0; i < edges; ++i) {
        int source, destination, weight;
        cin >> source >> destination >> weight;
        addEdge(graph, source, destination, weight);
    }

    // Print the adjacency list representation of the graph
    cout << "Adjacency List representation of the graph:\n";
    printGraph(graph);

    return 0;
}
