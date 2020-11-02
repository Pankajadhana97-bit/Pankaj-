#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve()
{
 int n,k;
 cin>>n>>k;
 std::vector<int> v;
 for (int i = 0; i < n; ++i)
 {
   int val;
   cin>>val;
   v.push_back(val);
 }
 std::vector<int>::iterator it;
 it=find(v.begin(), v.end(),k);
 if(it != v.end() )
  cout<<"Yes"<<endl;
else
  cout<<"No"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}