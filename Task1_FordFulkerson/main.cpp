#include <bits/stdc++.h>
#include "graph.hpp"
using namespace std;
/**
* @brief Main function to execute the code
* @return int 
*/
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
	/// Initialize Graph instance
    Graph g(n,m,1,n);

	/// Take input
	for(i=1;i<=m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
        g.addEdge(a,b,c);
	}

	/// Use the created Graph instance to call the fordFulkerson function to find the max flow
    int maxFlow = g.fordFulkerson(); 
    cout<<"Max Flow = "<<maxFlow;
}