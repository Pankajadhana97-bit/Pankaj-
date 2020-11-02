#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  vector<int> v;
  for (int i = 0; i < n; ++i)
  {
    int val;
    cin>>val;
    v.push_back(val);
  }
  transform(v.begin(), v.end(),v.begin(),negate<int>());
  for (int i = 0; i < n; ++i)
  {
    cout<<v[i]<<" ";
  }
}

int main()
{ 
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 cout.tie(NULL);
   
     int t;
      cin>>t;  
      while(t--)
      { 
      solve();
      }     
    return 0;
}
