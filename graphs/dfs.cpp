#include <iostream>
#include <vector>
using namespace std;

// Function to perform DFS
void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited) {
    cout << node << " "; // Process node
    visited[node] = true;

    // Visit all unvisited neighbors
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    vector<bool> visited(n + 1, false);

    cout << "Enter edges (node1 node2):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }

    int startNode;
    cout << "Enter starting node for DFS: ";
    cin >> startNode;

    cout << "DFS Traversal: ";
    dfs(startNode, adj, visited);
    cout << endl;

    return 0;
}
