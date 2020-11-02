#include<bits/stdc++.h>
using namespace std;
void solve()
{
int n;
cin>>n;
valarray<int> v(n);
for (int i = 0; i <n ; ++i)
{
  cin>>v[i];
}
valarray<int> v1;
v1=v.apply([](int x){return x=x-2;});
for( int& x: v)
cout<<x<<" ";
cout<<endl;
for( int& x: v1)
cout<<x<<" ";

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
