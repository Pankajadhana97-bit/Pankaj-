#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t;cin>>t; while(t--) { solve();} return 0

/*--------------------------------------------------------------------*/

using namespace std; 
void solve()
{
   int n;
   cin>>n;
   std::map<int , string > mp;
   for (int i = 0; i < n; ++i)
   {
   	int key;cin>>key;
   	string str;cin>>str;
   	mp[key]=str;
   }
   for(auto &x:mp)
   	cout<<"["<<x.first<<"]"<<"-> "<<x.second<<endl;

}
int main() 
{ 
    fast_io;
    cases;
}  