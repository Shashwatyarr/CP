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
        int f = 0;
        for (int i = 1; i <= n && !f; i++)
        {
            for (int j = 1; j <= n && !f; j++)
            {
                if (i + j > n)
                    break;
                cout << j << " " << i + j << endl;
                cout.flush();
                int a;
                cin >> a;
                if (a == 1)
                    f = 1;
            }
        }
    }
}