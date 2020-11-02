#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
        cin>>s;
        int hr=(s[0]-'0')*10+(s[1]-'0');
        int min=(s[3]-'0')*10+(s[4]-'0');
        int h=(hr*360)/12+(min*360)/(12*60);
        int m=(min * 360)/60;
        int a=abs(h-m);
        if (a>=180)
         a=360-a;
        cout<<a<<" degree"<<endl;
}

int main()
{ 
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 cout.tie(NULL);
     int t;
      cin>>t;  
      while(t--)
      { 
      solve();
      }     
    return 0;
}
