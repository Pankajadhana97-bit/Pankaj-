#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,z,minx,maxx,count_even=0,count_odd=0;
	    cin>>n>>minx>>maxx;
	    long long int arr[n][2];
	    for(long long int i=0;i<n;i++)
	    {
	        for(long long int j=0;j<2;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    for(long long int j=minx;j<=maxx;j++)
	    {
    	    for(long long int i=0;i<n;i++)
    	    {
    	        z=arr[i][0]*j+arr[i][1];
    	    }
    	    if(z%2==1)
    	        count_odd++;
    	    else
    	        count_even++;
	    }
	    cout<<count_even<<" "<<count_odd<<endl;
	}
	return 0;
}