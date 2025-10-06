#include <bits/stdc++.h>

typedef long long ll;   // Use ll for long long integers, especially for large numbers
typedef long double ld; // Use ld for long double floating-point numbers

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define REV(i, a, b) for (int i = a; i >= b; i--)
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
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

void findf(int a, unordered_map<int, int> &mpp)
{
    for (int i = 2; i * i <= a; i++)
    {
        while (a % i == 0)
        {
            mpp[i]++;
            a /= i;
        }
    }
    if (a > 1)
        mpp[a]++;
}

int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<int, int> mpp;
        int n;
        cin >> n;
        vector<int> a;
        getv(a, n);
        int f1 = 0;
        REP(i, 0, n - 2)
        {
            if (a[i] != a[i + 1])
            {
                f1 = 1;
                break;
            }
        }
        if (f1 == 0)
            cout << "YES" << endl;
        else
        {
            REP(i, 0, n - 1)
            {
                findf(a[i], mpp);
            }
            bool f = 0;
            for (auto it : mpp)
            {
                if (it.S % SZ(a) != 0)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}