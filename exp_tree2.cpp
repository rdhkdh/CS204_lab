#include<bits/stdc++.h>
using namespace std;

struct Tree
{
	Tree(char _oper)
		: oper(_oper) ///operator
		, right(NULL)
		, left(NULL)
	{
	}

	char oper;
	Tree* right;
	Tree* left;
};

int main()
{
	string str;
	cin >> str;

    stack<Tree> stk;
	
	for(int i=0; i < str.length(); i++)
	{
		stk.push(Tree(str[i]));
	}

	while(!stk.empty())
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