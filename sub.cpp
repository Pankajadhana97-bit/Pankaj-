#include <bits/stdc++.h> 
using namespace std; 
  
int min_sum(int n, int k) 
{ 
    int C[n + 1][k + 1]; 
    int i, j; 
  
    for (i = 0; i <= n; i++) { 
        for (j = 0; j <= min(i, k); j++) { 
  
            
            if (j == 0 || j == i) 
                C[i][j] = 1; 
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j]; 
        } 
    } 
  
    return C[n][k]; 
} 
  

int count_subsequence(int arr[], int n, int k) 
{ 
  
    sort(arr, arr + n);
    int num = arr[k - 1]; 
  
    int county = 0; 
    for (int i = k - 1; i >= 0; i--) { 
        if (arr[i] == num) 
            county++; 
    } 
  
    int countx = county; 
    for (int i = k; i < n; i++) { 
        if (arr[i] == num) 
            countx++; 
    } 
  
    return min_sum(countx, county); 
} 
  

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;
    int arr[n] ;
    for(int i=0;i<n;i++)
    cin>>arr[i]; 
    cout << count_subsequence(arr, n, k);
    } 
    return 0; 
} 