#include <bits/stdc++.h>
#include "graph.hpp"
using namespace std;
/**
* @brief Finding the source and sink for larger datasets
* @return int 
*/
int main()
{	

	#ifndef ONLINE_JUDGE
	freopen("test/input/5b.txt","r",stdin);
	//freopen("test/output/5d.txt","w",stdout);
	#endif

	int n,m,i,j;
	cin>>n>>m;
	
	int source[n+1], sink[n+1];
	memset(source,-1,sizeof(source));
	memset(sink,-1,sizeof(sink));

	/// Take input
	for(i=1;i<=m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;

		if(source[a]==-1)
			source[a] = 0;

		if(source[b]==-1)
			source[b] = 0;

		if(sink[a]==-1)
			sink[a] = 0;

		if(sink[b]==-1)
			sink[b] = 0;

		sink[a] = 1;
		source[b] = 1;
	}

	/// Find Source
	for(i=1;i<=n;i++)
	{
		if(source[i] == 0)
		{
			cout<<"Source vertex is: "<<i<<"\n";
			break;
		}
	}

	/// Find Sink
	for(i=1;i<=n;i++)
	{
		if(sink[i] == 0)
		{
			cout<<"Sink vertex is: "<<i<<"\n";
			break;
		}
	}

}