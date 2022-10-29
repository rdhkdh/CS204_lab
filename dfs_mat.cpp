#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000000];
bool visited[1000000];

void dfs(int s) 
{
    if (visited[s]) {return;}
    visited[s] = true;
    
    cout<<s<<" ";

    for (auto u: adj[s]) { dfs(u); }
}

int main()
{
    int n;
    cin>>n;

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

    for(int i=0;i<n;i++) { if(!visited[i]) {dfs(i);} }


}