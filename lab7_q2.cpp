//Working code for finding Prufer Code of a tree

#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000000];

bool last_check(int n, vector<int> adj[])
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(adj[i].empty()) {count++;}
    }
    if(count==n-2) {return true;}
    else{return false;}
}

int main()
{
    int n;
    cin>>n;

    string a="?",b;
    int a1,b1;
    vector <int> result;

    //creating adjacency list
    while(a!="$")
    {
        cin>>a;
        if(a.compare("$")==0) {break;}
        cin>>b; 
        a1=stoi(a); b1=stoi(b);
        adj[a1-1].push_back(b1-1);
        adj[b1-1].push_back(a1-1);

    }

    while(!last_check(n,adj))
    {
        int min_leaf;
        for(int i=0;i<n;i++)
        {
            if(adj[i].size()==1) {min_leaf=i; break;}
        }
        int parent=adj[min_leaf][0];
        cout<<parent+1<<" ";
        adj[min_leaf].clear();

        auto it= find(adj[parent].begin(), adj[parent].end(), min_leaf);
        adj[parent].erase(it);
    }

}