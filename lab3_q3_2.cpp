#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    if(m>=n)
    {
        int a[m],b[m]; //a= bigger no.

        //taking input
        for(int i=0;i<m;i++) { cin>>a[i]; } //first taking input of bigger no.
        for(int i=0;i<=m-n-1;i++) { b[i]=0; }
        for(int i=m-n;i<=m-1;i++) { cin>>b[i]; }

        int c[m+1];//result array

        int carry=0;
        for(int i=m-1;i>=0;i--)
        {
            if(carry==0) 
            { 
                int sum=a[i]+b[i];
                if(sum<=9) {c[i+1]=sum; carry=0;}
                else{c[i+1]=sum%10; carry=1;} //sum=10 to 18
            }
            else if(carry==1) 
            { 
                int summ =a[i]+b[i]+1;
                if(summ<=9) {c[i+1]=summ; carry=0;}
                else{c[i+1]=summ%10; carry=1;} //summ=10 to 18 
            }
        }
        if(carry==1) 
        {
            c[0]=1;
        }
        else if(carry==0) 
        {
            c[0]=0;
        }
        //printing result
        int index;
        for(int i=0;i<m+1;i++) //finding first non-zero digit
        {
            if(c[i]!=0) {index=i; break;}
        }
        for(int i=index;i<m+1;i++) {cout<<c[i];}
        cout<<endl;
        
    }

    else //n>m
    {
        int a[n],b[n]; //b= bigger no.

        //taking input
        for(int i=n-m;i<=n-1;i++) { cin>>a[i]; }//first taking input of smaller no.
        for(int i=0;i<=n-m-1;i++) { a[i]=0; }
        for(int i=0;i<=n-1;i++) { cin>>b[i]; }

        int c[n+1];//result array

        int carry=0;
        for(int i=n-1;i>=0;i--)
        {
            if(carry==0) 
            { 
                int sum=a[i]+b[i];
                if(sum<=9) {c[i+1]=sum; carry=0;}
                else{c[i+1]=sum%10; carry=1;} //sum=10 to 18
            }
            else if(carry==1) 
            { 
                int summ =a[i]+b[i]+1;
                if(summ<=9) {c[i+1]=summ; carry=0;}
                else{c[i+1]=summ%10; carry=1;} //summ=10 to 18 
            }
        }

        if(carry==1) 
        {
            c[0]=1;
            
        }
        else if(carry==0) 
        {
            c[0]=0;
            
        }
        //printing result
        int index;
        for(int i=0;i<n+1;i++) //finding first non-zero digit
        {
            if(c[i]!=0) {index=i; break;}
        }
        for(int i=index;i<n+1;i++) {cout<<c[i];}
        cout<<endl;
    }
}