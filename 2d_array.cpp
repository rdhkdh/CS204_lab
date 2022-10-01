#include<bits/stdc++.h>
using namespace std;

void printmat(int n,int* mat[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int mat[n][n];
    printmat(n,mat);
}