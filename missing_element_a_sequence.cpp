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
/*code goes here*/
	int n;
	cin>>n;
	int res=1;
	for (int i = 2; i<n; ++i)
	{
		res^=i;
	}
	int arr[n-1];
	for (int i = 1; i<n-1; ++i)
	{
		cin>>arr[i];
	}
	int ans=arr[0];
	for (int i = 0; i < n-1; ++i)
	{
	ans^=arr[i];	
	}
	cout<<(ans^res);
}
int main() 
{ 
    fast_io;
    cases;
}  