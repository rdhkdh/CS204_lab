//BFS code for adjacency matrix
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

    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++) {cin>>mat[i][j];}
    }

    //creating adjacency list
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==1) {adj[i].push_back(j);}
        }
    }

    for(int i=0;i<n;i++) { visited[i]=false; }
    
    for(int i=0;i<n;i++) { if(!visited[i]) { bfs(i,distance); } }

}