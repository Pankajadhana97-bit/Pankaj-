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
   int m, x, y;
        cin >> m >> x >> y;
        vector<int> cops(m);
        for (int i = 0; i < m; i++)
        {
            cin >> cops[i];
        }
        int  houses[100];
        for(int l=0;l<101;l++)
        houses[l]=0;
        int distance = x * y;
        for (auto &h:cops)
        {
            int min_dist = max(1, h - distance);
            int max_dist = min(100, h + distance);
            for (int j = min_dist; j <= max_dist; j++)
            {
                houses[j] = 1;
            }
        }
        int count = 0;
        for (int k = 1; k <= 100; k++)
        {
            if (houses[k]==0)count++;
        }
        cout<<count<<endl;
}
int main() 
{ 
    fast_io;
    cases;
} 