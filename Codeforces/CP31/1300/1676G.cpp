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

int cnt = 0;

pair<int, int> dfs(int node, int parent, vector<vector<int>> &adj, string &s)
{
    int b = 0, w = 0;
    if (s[node - 1] == 'W')
        w++;
    else
        b++;

    for (auto it : adj[node])
    {
        if (it == parent)
            continue;
        auto a = dfs(it, node, adj, s);
        b += a.f;
        w += a.s;
    }
    if (b == w)
        cnt++;
    return {b, w};
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
        vector<int> ans;
        getv(ans, n - 1);
        string s;
        cin >> s;
        // unordered_map<int,int> mpp;
        // for(auto it:ans) mpp[it]++;
        vector<vector<int>> adj(n + 1);
        int c = 2;
        for (int i = 0; i < n - 1; i++)
        {
            adj[ans[i]].push_back(c);
            adj[c].push_back(ans[i]);
            c++;
        }
        cnt = 0;
        dfs(1, -1, adj, s);
        cout << cnt << endl;
    }
    return 0;
}
