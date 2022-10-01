#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000000];

bool last_check(int n, vector<int> adj[])
{
    
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

    }

    int min_leaf;
    for(int i=0;i<n;i++)
    {
        if(adj[i].size()==1) {min_leaf=i; break;}
    }
    cout<<adj[min_leaf][0]+1<<" ";
    adj[min_leaf].clear();

    vector<int>::iterator it;
    for(int i=0;i<n;i++)
    {
        it= find(adj[i].begin(),adj[i].end(),min_leaf);
        if( it != adj[i].end() ) //if min leaf value found
        {
            adj[i].erase(it);
        }
    }

}