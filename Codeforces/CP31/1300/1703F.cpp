#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define rev(i, a, b) for (int i = a; i >= b; i--)
#define all(x) x.begin(), x.end()
#define sz(x) ((int)x.size())
#define getv(v, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.pb(x);                \
    }
#define getlv(v, n)             \
    for (int i = 0; i < n; i++) \
    {                           \
        ll x;                   \
        cin >> x;               \
        v.pb(x);                \
    }

void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        getv(a, n);
        vector<pair<int, int>> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < i + 1)
                b.push_back({a[i], i + 1});
        }
        sort(all(b));
        long long sum = 0;
        for (int i = 0; i < b.size(); i++)
        {
            auto it = upper_bound(b.begin() + i + 1, b.end(), b[i].second,
                                  [](int val, const pair<int, int> &p)
                                  { return val < p.first; });
            sum += b.end() - it;
        }
        cout << sum << endl;
    }
    return 0;
}
