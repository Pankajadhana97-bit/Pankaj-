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
 int min=0,max=0,j;
        string S1,S2;
        cin>>S1>>S2;
        for(j=0;j<S1.length();j++)
        {
            //to find max diff
            if(S1[j]=='?' && S2[j]=='?')
            max++;
            if((S1[j]!='?' && S2[j]=='?') || (S1[j]=='?' && S2[j]!='?'))
            max++;
            if(S1[j]!=S2[j])
            {
                if((S1[j]!='?' && S2[j]=='?') || (S1[j]=='?' && S2[j]!='?'))
                ;
                else
                {
            max++;
            min++;//to find min diff
                }
            }
             
        }
        cout<<min<<" "<<max<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 