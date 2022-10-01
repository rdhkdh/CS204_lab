#include<bits/stdc++.h>
using namespace std;

int main()
{
    //taking input
    int n; //no. of vertices
    cin>>n;

    vector <char> v[n];
    char x;
    for(int i=0;i<n;i++)
    {
        while(x!='#')
        {
            cin>>x;
            v[i].push_back(x); //creating adjacency list
        }
        x=0;
    }

    int odd_rows=0; //initially assume no vertices with odd degree
    //checking size-1 of adjacency list, as # is also being stored
    for(int i=0; i<n;i++)
    {
        if((v[i].size()-1)%2==1) {odd_rows++;} //if odd degree, then no of odd degree vertices increased by 1
    }
     
    if(odd_rows==0) {cout<<"-1"<<endl;} //graph is already even
    else{cout<<(odd_rows/2)<<endl;}


}
