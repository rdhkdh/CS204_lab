#include<bits/stdc++.h>
using namespace std;
int main()
{
    //taking input
    int m,n;
    cin>>m>>n;

    int a[m],b[n];
    for(int i=0;i<m;i++)
    {cin>>a[i];}
    for(int i=0;i<n;i++)
    {cin>>b[i];}

    long int no1,no2;
    for(int i=0;i<m;i++)
    {
        no1= no1+ a[i]*(pow(10,m-1-i));
    }
    for(int i=0;i<n;i++)
    {
        no2= no2+ b[i]*(pow(10,n-1-i));
    }
    long int product=no1*no2;
    cout<<product<<endl;
}