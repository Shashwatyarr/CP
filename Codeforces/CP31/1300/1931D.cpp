#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long x, y;
    cin >> n >> x >> y;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    map<long long, vector<long long>> G;
    for (int i = 0; i < n; ++i)
    {
        G[a[i] % y].push_back(a[i]);
    }

    long long c = 0;

    for (auto const &[rem_y, g] : G)
    {
        map<long long, long long> C;
        for (long long e : g)
        {
            long long rx = e % x;
            long long r = (x - rx) % x;

            if (C.count(r))
            {
                c += C[r];
            }
            C[rx]++;
        }
    }

    cout << c << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}