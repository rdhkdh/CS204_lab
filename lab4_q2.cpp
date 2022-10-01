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

    //checking size-1 of adjacency list, as # is also being stored

    int flag=1; //initially assuming graph is valid- all even degree
    for(int i=0;i<n;i++)
    {
        if((v[i].size()-1)%2==1) {flag=0; break;} //odd degree vertex found
        else{flag=1;} //even degree vertex
    }
    
    if(flag==0) {cout<<"false"<<endl;} //odd degree vertex found
    else{cout<<"true"<<endl;} //all vertices of even degree

}