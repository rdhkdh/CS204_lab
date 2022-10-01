#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000000];
bool visited[1000000];

void dfs(int s) 
{
    if (visited[s]) {return;}
    visited[s] = true;

    for (auto u: adj[s]) { dfs(u); }
}

int main()
{
    int n;
    cin>>n;

    string a="?",b;
    int a1,b1;
    vector <int> result;
    while(a!="$")
    {
        cin>>a;
        if(a.compare("$")==0) {break;}
        cin>>b; 
        a1=stoi(a); b1=stoi(b);
        adj[a1-1].push_back(b1-1);
        adj[b1-1].push_back(a1-1);

        for(int i=0;i<n;i++) { visited[i]=false; }
        int count=0;
        for(int i=0;i<n;i++) { if(!visited[i]) {dfs(i); count++;} }
        result.push_back(count);
    }
    for(auto i: result) {cout<<i<<endl;}

    return 0;
}