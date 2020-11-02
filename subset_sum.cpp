#include<bits/stdc++.h>

using namespace std;

void solve()
{
  
}
int main()
{
int n;
cin>>n;
int arr[n];
int sum=0;
for(int i=0;i<n;i++)
{
cin>>arr[i];
sum+=arr[i];
}
solve( n,sum, arr );
return 0;
}