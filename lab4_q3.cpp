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

    int odd_rows=0; //initially assume no vertices with odd degree
    for(int i=0;i<n;i++)
    {
        int count=0; //count of 1's in a row
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==1) {count++;}
        }
        if(count%2==1) {odd_rows++;} //if odd degree, then no of odd degree vertices increased by 1
    }

    if(odd_rows==0) {cout<<"-1"<<endl;} //graph is already even
    else{cout<<(odd_rows/2)<<endl;}

}