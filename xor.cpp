#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t;cin>>t; while(t--) { solve();} return 0
#define vec  vector<int>
#define pb push_back
/*--------------------------------------------------------------------*/

using namespace std; 
void solve()
{
int n;
cin>>n;
vec v(n);
for (int i = 0; i < n; ++i)
{
	cin>>v[i];
}
int sum=v[0];
for (int i = 1; i < n; ++i)
{
	sum=sum^v[i];
}
cout<<sum;	
}
int main() 
{ 
    fast_io;
    cases;
}  