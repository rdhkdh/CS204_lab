#include<bits/stdc++.h>
using namespace std;

// don't use this method! Very inefficient.
// Use v[i] to access the same and carry out the same algo.

int main()
{
    int n;
    cin>>n;

    vector<int> v;
    int x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    for(auto it1=v.rbegin(); it1!=v.rend(); it1--)
    {
        
        if(*it1>*(it1-1))
        {
            auto it3= upper_bound(v.rbegin(), (it1-1) , *(it1-1));
            swap( *(it1-1),*(it3) );
            sort( v.rbegin(),(it1-1) );
            //sort( find(v.begin(),v.end(),*it1) ,v.end() );
            break;
        }
    }
    for(auto it2=v.begin(); it2!= v.end(); it2++)
    {cout<<*it2<<endl;}

}
