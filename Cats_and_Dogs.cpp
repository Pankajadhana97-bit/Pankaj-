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
      long long c,d,l, max, min;
      string str="no";
      cin>>c>>d>>l;
        if (l%4 ==0)
        {
        max = (c+d)*4;
        if (c<=d*2) min = d*4;
        else
         min = d*4 +(c- d*2)*4;
        if (l<= max && l>= min) 
        str="yes";
        }
        cout<<str<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 