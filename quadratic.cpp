#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d=b*b-4*a*c;
    if(d>=0)
    {
        float r1= (-b+sqrt(d))/(2*a);
        float r2=  (-b-sqrt(d))/(2*a);
        cout<<r1<<" "<<r2<<endl;
    }
    else{cout<<"no real roots"<<endl;}
}