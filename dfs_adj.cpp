//WORKING CODE OF DFS for adjacency list!!!

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

    for(int i=0;i<n;i++) { if(!visited[i]) {dfs(i);} }

}