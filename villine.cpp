#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
//#define cases  int t;cin>>t; while(t--) { solve();} return 0
//#define for(x) for(int i=0;i<x;i++)
#define vec  vector<long long int>
#define pb push_back
/*--------------------------------------------------------------------*/

using namespace std; 
void solve()
{
  long long int n,count_b=0,count_a=0;
  cin>>n;
  long long int m,c;
  cin>>m>>c;
  for(int i=0;i<n;i++)
  {
  	long long int x,y,p;
  	cin>>x>>y>>p;
  	long long int value = y-(m*x)-c;
  	if(value>0)
  		count_a=count_a+p;
  	else if(value<0)
  		count_b=count_b+p;
  }
  cout<<max(count_a,count_b)<<endl;
}
int main() 
{ 
    fast_io;
    solve();
    //cases;
}  