#include <bits/stdc++.h>

using namespace std;

class Graph
{
    /// n: Number of vertices
    int n;
    /// m: Number of edges
    int m;
    /// s: Source vertex
    int s;
    /// t: Sink vertex
    int t; 
    
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
     * @return int
     * @param type An array such that type[i] = 1 if vertex i belongs to Set B and 0 if vertex i belongs to Set A and all edges directed from Set A to Set B 
     */
	int fordFulkerson(int type[]);
};
