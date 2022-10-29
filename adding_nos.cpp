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
    vector<int> b= {2,9,7,5,5};
    vector<int> a={0,6,6,1,2,6};
    vector<int> result;
    result= ADD(a,b);

    for(auto it = result.rbegin(); it!= result.rend(); it++) {cout<<*it<<" ";}

}