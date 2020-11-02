#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t;cin>>t; while(t--) { solve();} return 0
/*--------------------------------------------------------------------*/

using namespace std; 
void solve()
{
	string str;
	cin>>str;
	map<char,int> m;
	for(int j=0;j<str.length();j++)
	{
	m[str[j]]++;
    }
    for (auto it=m.begin();it!=m.end();it++)
    {
    	cout<<it->first <<" "<<it->second<<endl;
    }	
}
int main() 
{ 
    fast_io;
    cases;
}  