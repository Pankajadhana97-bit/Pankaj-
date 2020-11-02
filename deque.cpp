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
 deque<int> dq;
 int n;
 cin>>n;
 for (int i = 0; i < n; ++i)
 {
 	int item;
 	cin>>item;
 	dq.push_back(item);
 }
 //dq.pop_front();
 //dq.pop_back();
 for (std::deque<int>::iterator it = dq.begin(); it != dq.end(); ++it)
 {
 	cout<<*it<<" ";
 }
 //cout<<dq.front()<<endl;
 //cout<<dq.back()<<endl;	
}
int main() 
{ 
    fast_io;
    cases;
}  