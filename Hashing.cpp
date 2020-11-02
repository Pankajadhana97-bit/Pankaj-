#include<bits/stdc++.h>
using namespace std;
int solve()
{
    int n,z;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    z=*max_element(v.begin(),v.end());
    vector<int>v1(z+1);
    for(int i=0; i<n; i++)
        v1[v[i]]++;
    for(int i=0; i<=z; i++)
    {
        if(v1[i]>n/2)
            return i;
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve();
        cout<<endl;
    }
    return 0;

}