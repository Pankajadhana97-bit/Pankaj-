#include <iostream> 
using namespace std;

/* Defined values---------------------------------------------------- */
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define cases  int t;cin>>t; while(t--) { solve();} return 0 //no need in this prog.
#define vec  vector<int>
#define pb push_back
/*--------------------------------------------------------------------*/


void solve() 
{ 
  int n;
  cin>>n;
    int  arr[n];
    for (int i = 0; i < n; ++i)
    {
       cin>>arr[i];
    } 
    int flag = 1; 
    for (int i=0; i<=n-2; i++) 
    { 
      if (flag)  
       { 
      if (arr[i] > arr[i+1]) 
       swap(arr[i], arr[i+1]); 
        } 
        else
        { 
            if(arr[i] < arr[i+1]) 
            swap(arr[i], arr[i+1]); 
        } 
        flag = !flag;
    } 
    for (int i=0; i<n; i++) 
   cout << arr[i] << " ";
   cout<<endl;
}
  
int main() 
{ 
 fast_io;
 cases; 
} 