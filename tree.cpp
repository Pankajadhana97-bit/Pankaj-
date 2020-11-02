#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    long long int a[63]={0};

    for(int i=0;i<63;i++)
    {
        a[i]=1ll<<i;

    }
    int t;
    cin>>t;
    while(t--)
    {
        long long int key;
        cin>>key;
        if( __builtin_popcountll(key)==1)
            cout<<key<<endl;
        else
        {
        int idxe = upper_bound(a,a+63,key)-a;
        cout<<a[idxe]<<endl;
        }
    }
    return 0;
}