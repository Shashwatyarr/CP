#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool ok = false;
        for (int k = 2; k * k <= n; k++)
        {
            long long sum = 1, p = 1;
            while (sum < n)
            {
                p *= k;
                sum += p;
                if (sum == n)
                {
                    ok = true;
                    break;
                }
            }
            if (ok)
                break;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
