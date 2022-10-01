#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    sort(arr2,arr2+n);

    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr2[j])
            {
                sum= sum + j*factorial(n-i-1);
            }
        }
    }
    cout<<1+sum<<endl;


}