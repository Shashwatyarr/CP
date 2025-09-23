#include <bits/stdc++.h>
using namespace std;

const long long M = 998244353;
const int N = 200005;
long long f[N];

void p()
{
    f[0] = 1;
    for (int i = 1; i < N; ++i)
    {
        f[i] = (f[i - 1] * i) % M;
    }
}

void s()
{
    string x;
    cin >> x;
    int n = x.length();

    if (n == 0)
    {
        cout << 0 << " " << 1 << endl;
        return;
    }

    vector<int> g;
    int c = 1;
    for (int i = 1; i < n; ++i)
    {
        if (x[i] == x[i - 1])
            c++;
        else
        {
            g.push_back(c);
            c = 1;
        }
    }
    g.push_back(c);

    long long m = 0;
    long long w = 1;
    for (int v : g)
    {
        m += v - 1;
        w = (w * v) % M;
    }

    long long t = (w * f[m]) % M;
    cout << m << " " << t << endl;
}

int main()
{
    p();
    int t;
    cin >> t;
    while (t--)
        s();
    return 0;
}
