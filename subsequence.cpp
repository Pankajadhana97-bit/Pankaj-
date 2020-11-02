#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
    ios :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        
        partial_sort (a, a + k, a + n);

        int l = 1;
        for (int i = k - 1; i > 0 && a[i] == a[i - 1]; --i, ++l);

        int r = 0;
        for (int i = k; i < n; ++i)
            if (a[i] == a[k - 1])
                ++r;
        
        int N = l + r;
        int R = l < r ? l : r;

        unsigned long long result = 1;
        for (int i = 1; i <= R; ++i)
            result = result * (i + N - R) / i;

        cout << result << "\n";
    }

    return 0;
  }