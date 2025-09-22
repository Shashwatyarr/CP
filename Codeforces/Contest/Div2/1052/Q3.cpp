#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool f = 1;
        int i = 0;
        while (i < n)
        {
            if (s[i] == '1')
            {
                i++;
                continue;
            }
            int l = i;
            while (i < n && s[i] == '0')
                i++;
            int r = i - 1;
            if (r - l + 1 == 1)
            {
                f = 0;
            }
        }
        if (!f)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<int> p(n);
        i = 0;
        while (i < n)
        {
            if (s[i] == '1')
            {
                p[i] = i;
                i++;
                continue;
            }
            int l = i;
            while (i < n && s[i] == '0')
                i++;
            int r = i - 1;
            for (int j = l; j <= r; j++)
            {
                p[j] = r - (j - l);
            }
        }
        cout << "YES" << endl;
        for (int j = 0; j < n; j++)
            cout << p[j] + 1 << " ";
        cout << endl;
    }
}