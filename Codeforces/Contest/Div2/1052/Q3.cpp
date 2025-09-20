#include <bits/stdc++.h>
using namespace std;

int solve(string &s)
{
    int n = s.size();
    vector<int> a;
    for (int i = 0; i < n; i++)
        if (s[i] == '0')
            a.push_back(i);
    if (a.empty())
        return 1;
    vector<char> canl(n, 0), canr(n, 0);
    for (int i : a)
    {
        canl[i] = (i == 0) || (s[i - 1] == '0') || (i >= 2 && s[i - 1] == '1' && s[i - 2] == '0');
        canr[i] = (i == n - 1) || (s[i + 1] == '0') || (i + 2 < n && s[i + 1] == '1' && s[i + 2] == '0');
    }
    int idx = 0;
    int m = a.size();
    while (idx < m)
    {
        int j = idx;
        while (j + 1 < m && a[j + 1] == a[j] + 2 && s[a[j] + 1] == '1')
            j++;
        int cur = 0;
        if (canl[a[idx]])
            cur += 1;
        if (canr[a[idx]])
            cur += 2;
        if (cur == 0)
            return 0;
        for (int i = idx + 1; i <= j; i++)
        {
            int nxt = 0;
            if (cur == 1 || cur == 3)
                if (canr[a[i]])
                    nxt += 2;
            if (cur == 2 || cur == 3)
                if (canl[a[i]])
                    nxt += 1;
            cur = nxt;
            if (cur == 0)
                return 0;
        }

        idx = j + 1;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << (solve(s) ? "YES" : "NO") << endl;
    }
}