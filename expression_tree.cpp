#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    char left;
    char right;
};


int main() 
{
    string str;
    cin>>str;

    stack<char> stk;

    struct node* root;

    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]!=')') { stk.push(str[i]); }
        else 
        { 
            root->left = stk.top();
            stk.pop();
            root->data = stk.top();
            stk.pop();
            root->right = stk.top();
            stk.pop();
            
            stk.pop(); //pops '('
            stk.push();
        }
        i++;
    }

}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           