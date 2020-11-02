#include<bits/stdc++.h>

/*
Pankaj Adhana
swami sarvanand giri regional center;
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t;cin>>t; while(t--) { solve();} return 0 //no need in this prog.
#define vec  vector<int>
#define pb push_back
/*--------------------------------------------------------------------*/

using namespace std; 
void solve()
{
 int n,k;
 cin>>n>>k;
 vec v(n);
 vec v1(n+k);
 for (int i = 0; i < n; ++i)
 {
   cin>>v[i];
 }
 for (int j = n+i; j <n+k; ++j)
 {
   cin>>v1[i];
 }
 vec z(n+k,0);
 for (int i = 0; i < n+k-1; ++i)
 {
  if(i>n)
    z[i]=v[i];
  else
    z[i]=v1[i];
 }
 sort(z.begin(),z.end());
 for (int i = 0; i < n+k; ++i)
 {
   cout<<z[i]<<" ";
 }
}
int main() 
{ 
    fast_io;
    cases;
}  