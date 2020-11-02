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
	    int n,power=1;
	    cin>>n;
	    while(power<n)
	    {
	    	power=power*2;
	    }
	    cout<<power<<endl;

}
int main() 
{ 
    fast_io;
    cases;
}  