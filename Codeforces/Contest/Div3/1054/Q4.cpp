#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        vector<long long> a, b;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                a.push_back(i);
            else
                b.push_back(i);
        }
        if (a.empty() || b.empty())
        {
            cout << 0 << endl;
            continue;
        }
        long long x = 0;
        vector<long long> u;
        for (long long i = 0; i < a.size(); i++)
            u.push_back(a[i] - i);
        long long p = u[a.size() / 2];
        for (auto z : u)
            x += abs(z - p);
        long long y = 0;
        vector<long long> v;
        for (long long i = 0; i < b.size(); i++)
            v.push_back(b[i] - i);
        long long q = v[b.size() / 2];
        for (auto z : v)
            y += abs(z - q);
        cout << min(x, y) << endl;
    }
}