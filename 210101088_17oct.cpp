//Ridhiman Kaur Dhindsa, Roll no.210101088, 17 october assignment

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int s[n],f[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i]>>f[i];
    }

    int fmax= *max_element(f,f+n);

    int m[fmax];
    for(int i=0;i<fmax;i++)
    {
        m[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=s[i];j<f[i];j++)
        {
            m[j]++;
        }
    }

    cout<<*max_element(m,m+fmax)<<endl;
}