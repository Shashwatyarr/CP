#include <bits/stdc++.h>

typedef long long ll;   // Use ll for long long integers, especially for large numbers
typedef long double ld; // Use ld for long double floating-point numbers

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++) // Loop from a to b (inclusive)
#define REV(i, a, b) for (int i = a; i >= b; i--) // Loop from a to b (inclusive, reverse)
#define ALL(x) (x).begin(), (x).end()             // Get iterators to the beginning and end of a container
#define SZ(x) ((int)(x).size())                   // Get the size of a container
#define getv(v, n)              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.PB(x);                \
    }
#define getlv(v, n)             \
    for (int i = 0; i < n; i++) \
    {                           \
        long long x;            \
        cin >> x;               \
        v.PB(x);                \
    }

using namespace std;

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a, b;
        getv(a, n);
        getv(b, n);
        vector<int> diff;
        int maxi = INT_MIN;
        REP(i, 0, n - 1)
        {
            diff.PB(a[i] - b[i]);
            maxi = max(maxi, a[i] - b[i]);
        }
        vector<int> ans;
        REP(i, 0, n - 1)
        {
            if (diff[i] == maxi)
                ans.PB(i);
        }
        sort(ALL(ans));
        cout << SZ(ans) << endl;
        REP(i, 0, SZ(ans) - 1)
        {
            cout << ans[i] + 1 << " ";
        }
        cout << endl;
    }
}