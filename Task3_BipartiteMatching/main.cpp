#include <bits/stdc++.h>
#include "graph.hpp"
using namespace std;
 
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	int type[n+1];

	for(i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		type[i] = a;
	}

    Graph g(n+2,m+n,n+1,n+2);

	for(i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
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
    int maxFlow = g.fordFulkerson(type); 
    cout<<"Maximum Matching: "<<maxFlow;
}