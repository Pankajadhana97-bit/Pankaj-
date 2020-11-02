#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,sum;
    cin>>n>>sum;
    vector<int >v(n);
    for(int i=0;i<n;i++)
    {
      cin>>v[i];  
    }
    for (int i = 0; i < n-1; ++i)
        {
            for (int j = i+1; j < n; ++j)
            {
                if (v[i]+v[j]==sum)
                {
                 cout<<v[i]<<" "<<v[j]<<" "<<sum<<endl;
                }
            }
        }    
       
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