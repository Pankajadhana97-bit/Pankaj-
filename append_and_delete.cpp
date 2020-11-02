#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    vector<long long int>v(n);
	    for(long long int i=1;i<=n;i++)
	        cin>>v[i];
	    long long int count=0;
	    for(long long int i=1;i<=n-1;i++)
	    {
	        if(v[i]==v[i+2])
	        {
	            count++;
	            break;
	        }
	        if(v[i]==v[i+1])
	            count++;
	    }
	   cout<<count<<endl; 
	}
	return 0;
}