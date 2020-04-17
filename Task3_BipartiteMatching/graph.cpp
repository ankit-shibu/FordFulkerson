#include "graph.hpp"

Graph::Graph(int n, int m, int s, int t)
{
    this->n = n;
    this->m = m;
    this->s = s;
    this->t = t;
    graph = new vector<pair<int,int>>[n+1];
    parent.resize(n+1);
    visited.resize(n+1);
}

void Graph::addEdge(int u, int v,int cap)
{
    graph[u].push_back(make_pair(v,cap));
}

bool Graph::findPath()
{

    for(i=1;i<=n;i++)
        visited[i] = false;
    while(!q.empty())
        q.pop();
    q.push(s); 
    visited[s] = true; 
    parent[s] = -1; 
    while (!q.empty()) 
    { 
        u = q.front(); 
        q.pop(); 
        for (int j=0;j<graph[u].size();j++) 
        { 
            v = graph[u][j].first;
            cap = graph[u][j].second;
            if (visited[v]==false && cap>0) 
            { 
                q.push(v); 
                parent[v] = u; 
                visited[v] = true; 
            } 
        } 
    } 
    return (visited[t]==1);
}

int Graph::fordFulkerson(int type[]) 
{ 
    int u, v, i, j; 
    vector<int>assignments[n+1];  

    int max_flow = 0; 
    while (findPath()) 
    { 
        int path_flow = INT_MAX; 
        for (v=t; v!=s; v=parent[v]) 
        { 
            if(v!=t)
            {
                if(type[v])
                    assignments[v].push_back(parent[v]);
            }
            u = parent[v]; 
            int cap;
            for (int j=0;j<graph[u].size();j++)
            { 
                if(graph[u][j].first==v)
                    cap = graph[u][j].second;
            } 
            path_flow = min(path_flow, cap); 
        }

        for (v=t; v != s; v=parent[v]) 
        { 
            u = parent[v]; 
            for (int j=0;j<graph[u].size();j++) 
            { 
                if(graph[u][j].first==v)
                    graph[u][j].second -= path_flow;
            } 
            bool flag=true;
            for (int j=0;j<graph[v].size();j++)
            { 
                if(graph[v][j].first==u)
                    {
                        graph[v][j].second += path_flow;
                        flag=false;
                    }
            } 
            if(flag)
                graph[v].push_back(make_pair(u,path_flow));
        } 
        max_flow += path_flow; 
    }
    for(i=1;i<=n-2;i++)
        if(type[i]&&assignments[i].size())
            cout<<i<<"<-"<<assignments[i].back()<<"\n";
    cout<<"\n";
    return max_flow; 
} 