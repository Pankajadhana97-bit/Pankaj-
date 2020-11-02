#include<bits/stdc++.h>
/*
Pankaj Adhana
Panjab university;
*/

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t;cin>>t; while(t--) { solve();} return 0
#define vec  vector<int>
#define pb push_back
/*--------------------------------------------------------------------*/

using namespace std; 
int pow_even(int x)
{
   return x !=0 && ((x&(x-1)) ==0);
}
void solve()
{
/*code goes here*/
	int n;
      cin>>n;
      if(n==1) {
         cout<<"1"<<endl;
         continue;
      }
     else if(n==3)
      {
         cout<<"1 3 2"<<endl;
         continue;
      }
      else if(n==5)
      {
         cout<<"2 3 1 5 4"<<endl;
         continue;
      }
      else if(pow_even(n))
      {
        cout<<"-1"<<endl;
         continue;
         
      }
      else
      {
         cout<<"2 3 1 5 4 ";
         int i=6;
         while(i<=n)
         {
            if(pow_even(i))
            {
               cout<<" "<<i+1<<" "<<i;
               i+=2;
            }
            else
            {
               cout<<" "<<i;
               i++;
            }
         }
         cout<<endl;
      } 
   }
int main() 
{ 
    fast_io;
    cases;
}  