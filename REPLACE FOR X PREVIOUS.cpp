#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

// Defined values---------------------------------------------------- //
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t;cin>>t; while(t--) { solve();} return 0
#define vec  vector<long long int>
#define pb push_back
//--------------------------------------------------------------------//
using namespace std; 
void solve()
{
 long long int n,val,count=0;//no. of values in a array 
 vec s;
 cin>>n;
 long long int x; //the number which you want to make it desirable 
 cin>>x;
 long long int p; //position referral
 cin>>p;
 long long int k; //term which we have to replace
 cin>>k;
 for (long long int i = 0; i<n; ++i)
 {   
 	long long int x;
 	cin>>x;
 	s.pb(x);
 }
 if(binary_search(s.begin(), s.end(),x))
  {
  	long long int val= n-p+1;
  	for (long long int i = 0; i < n; ++i)
  	{
  		if (x<=s[i])
  		count++;
  	}
  	if(count == val)
  	 cout<<"0"<<endl;
  	if(count != val)
  	cout<<abs(count-val)<<endl;
  }
  else
 cout<<"-1"<<endl;
}	
int main() 
{ 
    fast_io;
    cases;
}  