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
/* my garbage */
long long int n;
 cin>>n;
 bool flag=true;
 for(long long int j=2;j<=n/2;j++){
 if(n%j==0){
flag=false;
	     break;
	  }
	}
 if(n==1) cout<<"no"<<endl;
else if(flag==true){
cout<<"yes"<<endl;
	}
	else
cout<<"no"<<endl;
	    
}
int main() 
{ 
    fast_io;
    cases;
}  