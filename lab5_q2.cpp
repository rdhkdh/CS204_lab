#include<bits/stdc++.h>
using namespace std;

int main()
{
    //taking input
    int n; //no. of vertices
    cin>>n;

    vector <char> v[n];
    char x;
    for(int i=0;i<n;i++)
    {
        while(x!='#')
        {
            cin>>x;
            v[i].push_back(x); //creating adjacency list
        }
        x=0;
    }

    int flag=1; //initially assumng no odd degree rows are present
    for(int i=0;i<n;i++)
    {
        if((v[i].size()-1)%2==1) {flag=0; cout<<i<<endl;} //if odd degree, then print index i
    }
    if(flag==1) {cout<<"-1"<<endl;} //at end of loop if flag is still 1, no odd degree rows were found

}