#include<bits/stdc++.h>
/*
Pankaj Adhana
swami sarvanand giri regional center;
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
    int n;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(i<j)
                arr[i][j]=0;
            else
               cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 }
int main() 
{ 
    fast_io;
    cases;
}  