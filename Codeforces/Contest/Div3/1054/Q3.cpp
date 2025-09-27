#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> c(n + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] <= n)
                c[a[i]]++;
        }

        if (k == 0)
        {
            cout << c[0] << endl;
        }
        else
        {
            int m = 0;
            for (int i = 0; i < k; ++i)
            {
                if (c[i] == 0)
                {
                    m++;
                }
            }
            cout << max(m, c[k]) << endl;
        }
    }
}
