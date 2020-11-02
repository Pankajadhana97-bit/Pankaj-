#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
        vector <int > v(n);
        for (int i = 0; i < n; ++i)
        {
        	cin>>v[i];
        }
	    vector<char>v1(9);
	    for(long long int i=1;i<=n;i++)
	        v1[v[i]]++;
	    long long int m=*min_element(v1.begin(),v1.end());
	    cout<<m<<endl;
	}
	return 0;
}