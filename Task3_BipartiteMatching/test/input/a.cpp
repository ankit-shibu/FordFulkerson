#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n,m,i,j,x,y;
	#ifndef ONLINE_JUDGE
	freopen("5.txt","r",stdin);
	freopen("11.txt","w",stdout);
	#endif
	cin>>n>>x>>y>>m;
	m = 40000;
	vector<int>a,b;
	for(i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		a.push_back(x);
		b.push_back(y);
	}
	map<int,int> ma1,ma2;
	int t = 1; 
	for(i=0;i<a.size();i++)
	{
		if(!ma1[a[i]])
		{
			ma1[a[i]] = t;
			++t;
		}
	}
	x = t-1;
	for(i=0;i<b.size();i++)
	{
		if(!ma2[b[i]])
		{
			ma2[b[i]] = t;
			++t;
		}
	}
	--t;
	cout<<t<<" "<<x<<" "<<t-x<<" "<<m<<"\n";
	for(i=0;i<m;i++)
	{
		cout<<ma1[a[i]]<<" "<<ma2[b[i]]<<"\n";
	}
}