#include <bits/stdc++.h>

using namespace std;

class Graph
{
    /// n: Number of vertices, m: Number of edges
    int n, m, s, t;
    
    /// Variables used in different functions
    int i, j, u, v, cap;

    /// graph: graph (Adjacency List), gmat: graph (Matrix Representation)
    vector<pair<int,int>> *graph;
    
    /// Find a Augmenting Path
    bool findPath(void);

    /// Visited array for dfs
    vector<bool> visited;
    
    /// Queue to be used for BFS
    queue<int> q;
        
    /// Parent of each node after every BFS
    vector<int> parent;
    
    /// Find the mincut set
    void mincut(void);

public:

    /// Constructor for initialising data structures
    Graph(int n, int m, int s,int t);

    /// Add a directed edge from u ~> v with capacity cap
    void addEdge(int u, int v, int cap);
	
	/// Find the max flow
	void fordFulkerson();
};
