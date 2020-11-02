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
        int ar[n];
        for (int i = 0; i < n; ++i)
        cin>>ar[i];
        int res = 0;  
        for (int i = 0; i < n; i++)      
        res =res^ar[i]; 
      
    cout<< res; 
	
}
int main() 
{ 
    fast_io;
    cases;
}  