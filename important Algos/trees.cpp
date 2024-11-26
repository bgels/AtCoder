#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using std::cin, std::cout, std::endl, std::vector, std::min;

// DFS Shortest Path Function
int dfsShort(vector<vector<int>>& tree, int node, int parent = -1, int depth = 0) {
    // Base case: if the current node is a leaf
    if (tree[node].size() == 1 && tree[node][0] == parent) {
        return depth;
    }

    // Initialize the minimum depth to a very large value
    int minDepth = INT_MAX;

    // Traverse each child
    for (int x : tree[node]) {
        if (x != parent) { // Skip the parent node
            minDepth = min(minDepth, dfsShort(tree, x, node, depth + 1));
        }
    }

    return minDepth; // Return the minimum depth found
}

// Solve function
void solve() {
    int N; 
    cin >> N;

    vector<vector<int>> treex(N + 1); // Resize adjacency list (1-based indexing)

    // Read the edges of the tree
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        treex[a].push_back(b);
        treex[b].push_back(a);
    }

    // Print the adjacency list (debugging)
    cout << "Adjacency List:" << endl;
    for (int i = 1; i <= N; i++) {
        cout << "Node " << i << ": ";
        for (int neighbor : treex[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Call dfsShort starting from node 1
    cout << "Minimum depth to a leaf: " << dfsShort(treex, 1) << endl;
}

// Main function
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
