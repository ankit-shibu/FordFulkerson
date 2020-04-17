#include <bits/stdc++.h>
#include "graph.hpp"
using namespace std;
 
int main()
{
	int n,m,i,j;
	cin>>n>>m;
	
	if(n<=1)
	{
		cout<<0<<"\n";
		cout<<"Set A: "<<1<<"\n";
		return 0;
	}

    Graph g(n,m,1,n);

	for(i=1;i<=m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
        g.addEdge(a,b,c);
	}
    int maxFlow = g.fordFulkerson(); 
    cout<<"Max Flow = "<<maxFlow;
}