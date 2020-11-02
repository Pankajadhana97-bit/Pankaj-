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
 int i,j,a,b,sum=0;
        cin>>a>>b;
        sum=a+b;
        for(i=sum+1;;i++)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    break;
                }
    
            }
    
            if(j==i)
            {
                cout<<i-sum<<endl;
                break;
            }
        }
}\
int main() 
{ 
    fast_io;
    cases;
}  