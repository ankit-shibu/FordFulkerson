#include <bits/stdc++.h>
#include "graph.hpp"
using namespace std;
using namespace std::chrono;
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

    Graph g(n+2,m+n,n+1,n+2);
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

	for(i=1;i<=n;i++)
	{
		if(!type[i])
			g.addEdge(n+1,i,1);
		else
			g.addEdge(i,n+2,1);
	}
	auto start = high_resolution_clock::now();
    int maxFlow = g.fordFulkerson(type); 
    cout<<"Maximum Matching: "<<maxFlow;
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start); 
  
    cout << "\nTime taken by function: "
         << duration.count() << " microseconds" << endl; 
}