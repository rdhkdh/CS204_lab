#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int a[m],b[m]; //a= bigger no.
    //taking input
    for(int i=0;i<m;i++) { cin>>a[i]; } //first taking input of bigger no.
    for(int i=0;i<=m-n-1;i++) { b[i]=0; }
    for(int i=m-n;i<=m-1;i++) { cin>>b[i]; }

    int c[m];//result array

    int borrow=0;
    for(int i=m-1;i>=0;i--)
    {
        if(borrow==0)
        {
            if(a[i]>=b[i]) {c[i]=a[i]-b[i]; borrow=0;}
            else if(a[i]<b[i]) {a[i]=a[i]+10; borrow=1; c[i]=a[i]-b[i];}
        }
        else if(borrow==1)
        {
            if(a[i]!=0) 
            {
                a[i]--;
                if(a[i]>=b[i]) {c[i]=a[i]-b[i]; borrow=0;}
                else if(a[i]<b[i]) {a[i]=a[i]+10; borrow=1; c[i]=a[i]-b[i];}
            }
            else if(a[i]==0) {a[i]=9; borrow=1; c[i]=a[i]-b[i];} //9 is always >= than b[i]
        }
    }

    //printing result
        int index;
        for(int i=0;i<m;i++) //finding first non-zero digit
        {
            if(c[i]!=0) {index=i; break;}
        }
        for(int i=index;i<m;i++) {cout<<c[i];}
        cout<<endl;

}