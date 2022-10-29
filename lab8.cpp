#include<bits/stdc++.h>
using namespace std;

int dist(pair<int,int> p)
{
    int dist_sq= (p.first*p.first)+(p.second*p.second); //x2+y2
    return dist_sq;
}

//modification: you can actually use v.size() instead of n everywhere in the functions. This way n need not be passed to the functions.
//read nodes from 1 to n, and access vector using 0 to (n-1)

void min_heapify(vector< pair<int,int> > v, int i, int n) //i=index to start from, n=heap size
{
    int smallest;
    if( 2*i<=n && dist(v[2*i-1]) < dist(v[i-1]) ) {smallest=2*i;}
    else{smallest=2*i;}
    if( 2*i+1<=n && dist(v[2*i]) < dist(v[smallest-1]) ) {smallest=2*i+1;}

    if(smallest!=i) { v[i-1].swap(v[smallest-1]); }

    min_heapify(v,smallest,n);
}

void build_minheap(vector< pair<int,int> > v, int n)
{
    for(int i=n/2; i>=1; i--)
    {
        min_heapify(v,i,n);
    }
}

void heap_extract_min(vector< pair<int,int> > v, int n)
{
    if(n<1) {cout<<"heap underflow\n"; return;}
    pair<int,int> min;
    min=v[0];
    cout<<min.first<<" "<<min.second<<endl;

    v[0]=v[n-1];
    n=n-1;
    min_heapify(v,1,n);
}


int main()
{
    int n;
    cin>>n;

    vector < pair<int,int> > v;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    build_minheap(v,n);

    for(int i=0;i<n;i++)
    {
        heap_extract_min(v,n);
    }
}