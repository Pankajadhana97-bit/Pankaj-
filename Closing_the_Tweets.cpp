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
 int n,k,cnt=0;
    cin>>n>>k;
    int a[n+1];
    for (int i=1;i<=n;i++)
			{a[i]=0;}
    for(int i=1;i<=k;i++)
    {
        string s;
        cin>>s;
        if(s=="CLICK")
        {
            int x;
            cin>>x;
            if(a[x]==0)
            {
              //  cout<<"GHUSA FOR CLICK "<<endl;
                a[x]=1;
            }
            else if(a[x]==1)
            {
                //cout<<"GHUSA for UNCLICK"<<endl;
                a[x]=0;
            }
        }
        else if(s=="CLOSEALL")
        {
            for (int K=1;K<=n;K++)
			{a[K]=0;}
           // cout<<"0"<<endl;
        }
        cnt=0;
        for(int j=1;j<=n;j++)
        {
            if(a[j]==1)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
int main() 
{ 
    fast_io;
    //cases;
    solve();
} 