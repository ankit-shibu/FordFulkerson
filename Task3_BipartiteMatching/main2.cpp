#include <bits/stdc++.h>
#include "graph.hpp"
using namespace std;
using namespace std::chrono;

/**
* @brief Main function to execute the code
* @return int 
*/
int main()
{
	int n,m,i,j,x,y;
	#ifndef ONLINE_JUDGE
	freopen("test/input/5b.txt","r",stdin);
	freopen("test/output/5b.txt","w",stdout);
	#endif
	cin>>n>>x>>y>>m;
	int type[n+1];

	for(i=1;i<=n;i++)
	{
		if(i<=x)
			type[i] = 0;
		else
			type[i] = 1;
	}

	/// Initialze a instance of Graph
    Graph g(n+2,m+n,n+1,n+2);

	/// Take Input
	for(i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		//b+=x;
		if(!type[a])
        	g.addEdge(a,b,1);
        else
        	g.addEdge(b,a,1);
	}

	/// Create a new source and sink vertex and add edges accordingly to create a newtork flow problem
	for(i=1;i<=n;i++)
	{
		if(!type[i])
			g.addEdge(n+1,i,1);
		else
			g.addEdge(i,n+2,1);
	}
	auto start = high_resolution_clock::now();
    int maxFlow = g.fordFulkerson(type); 
	/// Use the created Graph instance to call the fordFulkerson function to find the Bipartite matching
    cout<<"Maximum Matching: "<<maxFlow;
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start); 
  
    cout << "\nTime taken by function: "
         << duration.count() << " microseconds" << endl; 
}