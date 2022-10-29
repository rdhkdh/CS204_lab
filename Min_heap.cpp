#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define PNO cout<<"NO\n"
#define PYES cout<<"YES\n"
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int x[n],y[n],d[n];
    map<int,int>m1,m2;
    rep(i,0,n)
    {
        cin>>x[i]>>y[i];
        d[i]=x[i]*x[i] + y[i]*y[i];
        m1[d[i]]=x[i];
        m2[d[i]]=y[i];
        //map<int,int>m1,m2;
    }
    int c=1;
    sort(d,d+n);
    for(i=0;i<n;i++)
    {
        cout<<m1[d[i]]<<" "<<m2[d[i]]<<"\n";
    }
}
