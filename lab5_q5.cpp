#include<bits/stdc++.h>
using namespace std;

vector<int> ADD(vector<int> a,vector<int> b) //assuming 'a' has more number of digits.
{
    vector <int> sum;
    int x,carry=0;
    for(int i=0;i<=b.size()-1;i++)
    {
        x=a[i]+b[i]+carry;
        sum.push_back(x%10);
        carry=x/10;
    }
    int y;
    for(int i=b.size(); i<=a.size()-1;i++)
    {
        y=a[i]+carry;
        sum.push_back(y%10);
        carry=y/10;
    }
    if(carry!=0) {sum.push_back(carry);}

    return sum;
}


int main()
{
    //taking input
    int n,m;
    cin>>n>>m; //assuming n is bigger
    int a[n],b[m];

    for(int i=0;i<n;i++) { cin>>a[i]; }
    for(int i=0;i<m;i++) { cin>>b[i]; }

    vector <int> product;
    int x,carry=0;
    for(int i=n-1;i>=0;i--)
    {
        x= ( a[i]*b[m-1] ) +carry;
        //x=x+carry;
        product.push_back(x%10);
        carry=x/10;
    }
    if(carry!=0) {product.push_back(carry);}

    // vector<int>::iterator it;
    // for(auto it = product.rbegin(); it!= product.rend(); it++) {cout<<*it<<" ";}

    vector <int> secondary;
    for(int k=m-2;k>=0;k--)
    {
        secondary.clear();
        for(int i=1;i<=m-1-k;i++) { secondary.push_back(0); }
        carry=0;
        for(int i=n-1;i>=0;i--)
        {
            x=a[i]*b[k];
            x=x+carry;
            secondary.push_back(x%10);
            carry=x/10;
        }
        if(carry!=0) {secondary.push_back(carry);}
        product= ADD(secondary,product);
    }

    for(auto it = product.rbegin(); it!= product.rend(); it++) {cout<<*it;}



}