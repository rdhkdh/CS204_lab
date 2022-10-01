//Ridhiman Dhindsa, 210101088
#include<iostream>
using namespace std;

int main()
{
    int m,n,target_sum;

    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) { cin>>arr[i]; }

    cin>>m;

    
    while(m--)
    {
        cin>>target_sum;

        bool sum_found = false;
        int i=0,j=0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j) {continue;}
                if(arr[i]+arr[j]==target_sum)
                {
                    sum_found = true;
                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
            if(sum_found==true) {break;}
        }
        if(sum_found==false) {cout<<"0"<<endl;}

        
    }

}