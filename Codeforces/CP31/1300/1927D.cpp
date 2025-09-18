#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<pair<int, int>> ans;
        ans.push_back({0, -1});
        int l = -1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                l = i - 1;
                ans.push_back({i, l});
            }
            else
            {
                ans.push_back({i, l});
            }
        }
        int q;
        cin >> q;
        while (q--)
        {
            int a0, b;
            cin >> a0 >> b;
            if (ans[b - 1].second >= a0 - 1)
            {
                cout << ans[b - 1].first + 1 << " " << ans[b - 1].second + 1 << endl;
            }
            else
            {
                cout << "-1 -1" << endl;
            }
        }
        cout << endl;
    }
}
