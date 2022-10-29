//Roll no.210101088, Ridhiman Kaur Dhindsa
#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &a, vector<int> &b)
{
	vector<int> temp;
	int i=0,j=0;
	while( i<a.size() && j<b.size() )
	{
		if(a[i]<=b[j])
		{
			temp.push_back(a[i]); i++;
		}
		else{ temp.push_back(b[j]); j++; }
	}
	
	if( i==a.size() ) 
	{
		for(int k=j;k<=b.size()-1;k++) 
		{
			temp.push_back(b[k]); 	
		}
	}
	
	if( j==b.size() )
	{ 
		for(int k=i;k<=a.size()-1;k++)
		{ temp.push_back(a[k]); } 
	}
	
	//copying temp to a
	a.clear();
	for(i=0;i<temp.size();i++) { a.push_back(temp[i]); }
	return a;
}

int main()
{
	vector<int> v[10000];
	
	
	string s;
	getline(cin,s);
	
	int i=0,k=0;
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
			{v[k].push_back(stoi(str));}
		}
		else {k++;}
		i++;
	}
	
	//vector<int> result;
	
	for(int i=1; i<=k-1; i++)
	{ merge(v[0],v[i]); }
	
	for(int i=0;i<v[0].size();i++)
	{cout<<v[0][i]<<" ";}
	cout<<endl;
	
}
