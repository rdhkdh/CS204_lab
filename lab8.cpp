#include<bits/stdc++.h>
using namespace std;

void min_heapify(vector<int> v,int i)
{
    int l=2*i;
    int r=2*i+1;
    int smallest;
    if(l<=v.size() && v[l-1]>v[i-1]) {smallest=i;}
    else {smallest=l;}
    if(r<=v.size() && v[r-1]<v[smallest-1]) {smallest=r;}
    if(smallest!=i) 
    {
        swap(v[i-1],v[smallest-1]);
        min_heapify(v,smallest);
    }

}

void build_minheap(vector<int> v)
{
    for(int i=v.size()/2 ;i>=1;i--)
    {
        min_heapify(v,i);
    }
}




int main()
{
    int n;
    cin>>n;

    vector< pair<int,int> > v; //coordinates
    vector<int> d; //distances


    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        d.push_back((x*x)+(y*y)) ;
    }
    
    build_minheap(d);

    for(int i=0)

}