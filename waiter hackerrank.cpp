#include<bits/stdc++.h>
using namespace std;
const int N = 1200;
const int M = 110000;
int ans[M], stackk[M], stack_temp[M],prime_numbers[N];
int atop, top, ttop, n,q, number;

void check()
    {
    number = 0;
    for(int i = 2; i < M; ++ i)
    {
        bool find = false;
        for(int j = 2; j <= sqrt(i); ++ j)
        {
            if(i%j==0)
            {
                find = true;
                break;
            }
        }
        if(!find)
        {
            prime_numbers[number ++] = i;
        }
        if(number >= 1200)
            return ;
    }
}

int main() 
    {
      cin>>n>>q;
    check();
    atop = top = 0;
    for(int i = 0; i < n; ++ i)
    {
       cin>>stackk[top++];
    }
    for(int i = 0; i < q; ++ i)
    {
        ttop = 0;
        while(top)
        {
            int v = stackk[top - 1];
                 -- top;
            if(v%prime_numbers[i] == 0)
            {
             ans[atop ++] = v;
            }
            else
            {
             stack_temp[ttop ++] = v;
            }
        }
        while(atop)
        {
         cout<<ans[atop - 1]<<endl;//prime==0
               -- atop;
        }
        for(int j = 0; j < ttop; ++ j)
        {
            stackk[j] = stack_temp[j];
        }
        top = ttop;
        if(!top)
          break;
    }
    while(top)//jb tk top zero nhi ho jaata
    {
        cout<<stackk[top-1]<<endl;//prime not = 0
        top--;
    }
    return 0;
}