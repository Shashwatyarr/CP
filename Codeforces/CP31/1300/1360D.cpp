#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k >= n)
            cout << "1" << endl;
        else
        {
            int ans = n;
            for (int i = 1; i * i <= n; i++)
            {
                if (i > k)
                    break;
                if (n % i == 0)
                {
                    ans = min(ans, n / i);
                    if (n / i <= k)
                    {
                        ans = min(ans, i);
                    }
                }
            }
            cout << ans << endl;
        }
    }
}
