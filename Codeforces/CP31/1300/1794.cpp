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
        vector<int> ans(n);

        rep(i, 0, n - 1)
        {
            int l = 0, r = i;
            int maxi = 1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (a[mid] >= i - mid + 1)
                {
                    maxi = max(maxi, i - mid + 1);
                    r = mid - 1;
                }
                else
                    l = mid + 1;
            }
            ans[i] = maxi;
        }

        rep(i, 0, n - 1) cout << ans[i] << " ";
        cout << "\n";
    }
}
