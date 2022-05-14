#include <iostream>
#include <vector>
#include <queue>
using namespace std;


class Solution {
public:
    vector<int> bfs_of_graph(int no_of_nodes, vector<int> adj_list[]) {
        queue<int> qt;
        vector<int> bfs;
        vector<int> visited(no_of_nodes + 1, 0);

        for (int i = 1; i <= no_of_nodes; ++i) {
            // Node in graph not visited.
            if (visited[i] == 0) {
                qt.push(i);
		// Mark the nodes visited as we push to bfs vector.
                visited[i] = 1;
                while (!qt.empty()) {
                    int node = qt.front();
                    qt.pop();
                    bfs.push_back(node);
                    for (auto ele: adj_list[node]) {
                        if (visited[ele] == 0) {
                            qt.push(ele);
			    // Mark the nodes in queue as we push to bfs vector.
			    visited[ele] = 1;
                        }
                    }
                }

            }
        }
        return bfs;
    }
};


int main()
{
    int n, m;

    cout << "Enter the number of nodes and the number of edges:\n";
    cin >> n >> m;

    // Decalare the adjacent list
    vector<int> adj[n + 1];

    cout << "Enter the inputs:\n";
    // Take edges as inputs
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    Solution obj;
    vector<int> bfs = obj.bfs_of_graph(n, adj);

    cout << "BFS traversal of disconnected graph:\n";
    for (int i = 0; i < n; ++i) {
        cout << bfs[i] << " ";
    }
    cout << "\n";
    return 0;
}
