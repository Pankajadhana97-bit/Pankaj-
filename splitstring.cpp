#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t;cin>>t; while(t--) { solve();} return 0
#define vec  vector<long long int>
#define pb push_back
/*--------------------------------------------------------------------*/

using namespace std; 
void solve()
{
	  int n;
	  cin>>n;
	  int minx,maxx;
	  cin>>minx>>maxx;
	  int w,b;
	  cin>>w>>b;
	  vec v;
	  for (int  i= minx; i<=maxx; ++i)
	  {
	  	for (int j = 0; j <n; ++j)
	  	{
	  		int X=w*i+b;
	  		int Y=w*X+b;
	  		v.pb(Y);
	  	}
	  }
	  int count_a=0,count_b=0;
	  for(int i=0;i<v.size();i++)
	  {
	  	if(v[i]%2 != 0)
	  		count_a++;
	  	else
	  		count_b++;
	  }
	  cout<<count_a<<" "<<count_b<<endl;
	  
}
int main() 
{ 
    fast_io;
    cases;
}  