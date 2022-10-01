#include<bits/stdc++.h>
using namespace std;

int main()
{
    //taking input
    int n;
    cin>>n;

    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

    //counting no. of connected vertices for a given vertex
    
    int flag=1; //initially assuming its a valid graph
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==1) {count++;}
        }
        if(count%2==1) {flag=0; break;} //count is odd
        else{flag=1;} //count is even
    }

    if(flag==0) {cout<<"false"<<endl;} //odd degree vertex found
    else{cout<<"true"<<endl;} //even degree for all vertices



}