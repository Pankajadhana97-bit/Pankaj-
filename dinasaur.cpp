  #include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int n,k;
        cin >> n >> k;
        int a[n];
        for(auto i=0;i<n;i++)
            a[i]=i+1;
       swap(a[k],a[n-1]);
        for(auto i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
    return 0;
}