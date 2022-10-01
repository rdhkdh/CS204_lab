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

    int flag=1; //initially assuming no odd degree rows are present
    for(int i=0;i<n;i++)
    {
        int count=0; //count of 1's in a row
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==1) {count++;}
        }
        if(count%2==1) {flag=0; cout<<i<<endl;} //if odd degree, then print index i
    }
    //at end of loop if flag is still 1, no odd degree rows were found
    if(flag==1) {cout<<"-1"<<endl;}


}