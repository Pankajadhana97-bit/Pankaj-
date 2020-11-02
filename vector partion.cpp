#include<bits/stdc++.h>
using namespace std;
void solve()
{
  vector<int> v; 
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int val;
    cin>>val;
    v.push_back(val);
  }
  is_partitioned(v.begin(), v.end(), [](int x) 
  { 
    return x%2==0; 
    
  })? 
  
  cout << "Vector is partitioned": 
  cout << "Vector is not partitioned"; 
  cout << endl; 
  partition(v.begin(), v.end(), [](int x) 
  { 
    return x%2==0; 
    
  });
  is_partitioned(v.begin(), v.end(), [](int x) 
  { 
    return x%2==0; 
    
  })? 
  
  cout << " Now Vector is partitioned": 
  cout << " Vector is not partitioned"; 
  cout << endl; 

  for( int& x : v)
    cout<< x <<" ";

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
