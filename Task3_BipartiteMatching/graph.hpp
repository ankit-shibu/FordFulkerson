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
    
    /**
     * @brief Perform BFS to find a augmenting path
     * 
     * @return bool  
     */
    bool findPath(void);

    /// Visited array for dfs
    vector<bool> visited;
    
    /// Queue to be used for BFS
    queue<int> q;
        
    /// Parent of each node after every BFS
    vector<int> parent;

public:

    /**
     * @brief Constructor for initialising data structure
     * 
     * @param n number of nodes
     * @param m number of edges
     * @param s source
     * @param t sink
     */
    Graph(int n, int m, int s, int t);

    /**
     * @brief Add directed edge from u -> v
     * @param cap capacity of edge
     * @param u From vertex
     * @param v To vertex
     */
    void addEdge(int u, int v, int cap);
	
    /**
     * @brief Applying the FordFulkerson Alogorithm. Calls the mincut
     * 
     * 
     *  
     */
	int fordFulkerson(int type[]);
};
