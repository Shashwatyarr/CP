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
        vector<int> a(2 * n + 1, 0);
        vector<bool> vis(2 * n + 1, 0);
        int cur = 1;
        for (int i = n; i >= 1; i--)
        {
            while (vis[cur])
                cur++;
            int c = cur;
            int b = c + i;
            while (b <= 2 * n && vis[b])
                b += i;
            a[c] = a[b] = i;
            vis[c] = vis[b] = 1;
        }
        for (int i = 1; i <= 2 * n; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}