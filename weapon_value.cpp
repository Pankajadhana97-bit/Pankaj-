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
      string s[n];
      for(int i=0;i<n;i++){
        cin>>s[i];
      }
      int res=0;
      for(int i=0;i<10;i++)
      {
        int sum=0;
        for(int j=0;j<n;j++)
        {
          int val=s[j][i]-'0';
          sum^=val;
        }
        res+=sum;
      }
      cout<<res<<endl;
    }
  
int main() 
{ 
    fast_io;
    cases;
}  