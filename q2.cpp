#include<bits/stdc++.h>
using namespace std;

int array_compare(int arr[],int arr2[],int n)
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr2[i])
        {
            result=1; //returns 1 when arrays are same
        }
        else{result=0;}
    }
    return result;
}

int main()
{
    //input
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //creating sorted copy
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    sort(arr2,arr2+n);

    //counting steps to reach original array
    int count=0;
    do
    {
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
        count++;
    }
    while(array_compare(arr,arr2,n)!=1);

    cout<<1+count<<endl;
    
}