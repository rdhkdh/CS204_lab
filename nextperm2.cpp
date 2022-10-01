#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int arr[n];
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int flag=0;
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        {
            int index=i-1;
            for(int j=n-1;j>index;j--)
            {
                if(arr[j]>arr[index])
                {
                    swap(arr[index],arr[j]);
                    flag=1;
                    break;
                }
            }
            sort(arr+index+1,arr+n);
            break;
        }
    }
    if(flag==1)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
    else{cout<<"-1"<<endl;}
}