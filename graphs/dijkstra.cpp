#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> shortestPathBFS(int start, int n, vector<vector<int>> &adj) {
    vector<int> dist(n + 1, -1);  // Distance array initialized to -1 (unreachable)
    queue<int> q;

    q.push(start);
    dist[start] = 0;  // Distance to the start node is 0

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            if (dist[neighbor] == -1) { // If not visited
                dist[neighbor] = dist[node] + 1; // Update shortest distance
                q.push(neighbor);
            }
        }
    }
    return dist; // Return shortest distances from start node
}

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    cout << "Enter " << m << " edges (u v format):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  // Undirected Graph
    }

    int start;
    cout << "Enter the start node for shortest path: ";
    cin >> start;

    vector<int> distances = shortestPathBFS(start, n, adj);

    cout << "Shortest distances from node " << start << ":\n";
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": " << distances[i] << endl;
    }

    return 0;
}
