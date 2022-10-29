#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v[10000];
	string s;
	getline(cin,s);
	
	int i=0,j=0;
	while(s[i]!='\0')
	{
		if(s[i]!='$')
		{
			string str="";
			while(s[i]!=' ') 
			{ 
				
				str=str+s[i];
				i++;
			}
			if(str!="")
			{v[j].push_back(stoi(str));}
		}
		else {j++;}
		i++;
	}
	
	for(int i=0;i<v[1].size();i++) {cout<<v[1][i]<<" ";}
}

