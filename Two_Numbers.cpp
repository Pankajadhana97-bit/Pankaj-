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
  long long  int n;
   long long int m;
   long long int turn;
   cin>>n>>m>>turn;
   for(long long int i=1;i<=turn;i++)
   {
       if(i%2!=0)
       n=2*n;
       if(i%2==0)
       m=2*m;
   }
   long long int minimum=min(n,m);
   int maximum=max(n,m);
   cout<<maximum/minimum<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 