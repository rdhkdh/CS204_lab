//BFS code for adjacency list

#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000000];
bool visited[1000000];
queue <int> q;

void bfs(int x, int distance[]) // have to pass distance array
{
    visited[x]=true;
    distance[x]=0;
    q.push(x);
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        cout<<s<<" ";
        for(auto u: adj[s])
        {
            if(visited[u]) {continue;}
            else
            {
                visited[u]=true;
                distance[u]=distance[s]+1;
                q.push(u);
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int distance[n];

    //creating adjacency list
    string x="?";
    for(int i=0;i<n;i++)
    {
        while(x!="#")
        {
            cin>>x;
            if(x.compare("#")==0) {break;}
            adj[i].push_back(stoi(x));  
        }
        x="?";
    }

    for(int i=0;i<n;i++) { visited[i]=false; }
    
    for(int i=0;i<n;i++) { if(!visited[i]) { bfs(i,distance); } }
    
}