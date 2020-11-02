#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values ---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t;cin>>t; while(t--) { solve();} return 0
#define for(x) for(int i=0;i<x;i++)
#define vec  vector<long long int>
#define pb push_back
/* -------------------------------------------------------------------- */

using namespace std; 
void solve()
{
int n;
cin>>n;
 string str;
cin>>str;
int value;
if(n==1)
{
	cin>>value;
	if(value%2==0 && str=="Dee")
    cout<<"Dee"<<endl;
    else
    	cout<<"Dum"<<endl;
}
else
{
	for(n)cin>>value;
	cout<<"Dum"<<endl;
}

}
int main() 
{ 
    fast_io;
    cases;
}  