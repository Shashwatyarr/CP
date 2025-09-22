#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n);
        vector<int> cnt(m + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int l;
            cin >> l;
            a[i].resize(l);
            for (int j = 0; j < l; j++)
            {
                cin >> a[i][j];
                cnt[a[i][j]]++;
            }
        }
        bool f = 1;
        for (int i = 1; i <= m; i++)
        {
            if (cnt[i] == 0)
            {
                f = 0;
                break;
            }
        }
        if (!f)
        {
            cout << "NO" << endl;
            continue;
        }
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            bool f1 = 0;
            for (int x : a[i])
            {
                if (cnt[x] == 1)
                {
                    f1 = true;
                    break;
                }
            }
            if (!f1)
            {
                b++;
            }
        }
        if (b >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}