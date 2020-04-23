#include <bits/stdc++.h>
#include "graph.hpp"
using namespace std;
using namespace std::chrono;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("test/input/5d.txt","r",stdin);
	freopen("test/output/5d.txt","w",stdout);
	#endif

	int n,m,i,j;
	cin>>n>>m;
	
	// Initialize Graph instance
    Graph g(n,m,n-1,n);

	for(i=1;i<=m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
        g.addEdge(a,b,c);
	}
	auto start = high_resolution_clock::now();
    int maxFlow = g.fordFulkerson(); 
    cout<<"Max Flow = "<<maxFlow;
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start); 
  
    cout << "\nTime taken by function: "
         << duration.count() << " microseconds" << endl; 
}