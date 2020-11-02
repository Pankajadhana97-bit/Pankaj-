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
 int n,m,k;
 cin>>n>>m>>k;
 int diff=abs(n-m);
 diff=max(0,diff-k);
 cout<<diff<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 