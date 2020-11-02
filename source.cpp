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
    vec v(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    }
    int max_so_far=0; //initialize max so far 
    int max_ending_here=0; //initialize max ending here
    for(int i=0;i<n;i++)// loop
    {
    	max_ending_here=max_ending_here+v[i]; //checking the subarray sum
    	if (max_ending_here>max_so_far)
    	{
    		max_so_far=max_ending_here; //if sum is not negative 
    	}
    	if (max_ending_here<0)
    	{
    		max_ending_here=0;// important condition if  max ending is negative then it will zero
    	}
    }
    cout<<max_so_far;//at last return max_so_far
}
int main() 
{ 
    fast_io;
    cases;
}  