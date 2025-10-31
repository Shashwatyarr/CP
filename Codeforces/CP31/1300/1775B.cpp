#include <bits/stdc++.h>
using namespace std;

void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
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
        vector<vector<int>> e(n);
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            e[i].resize(k);
            for (int j = 0; j < k; j++)
            {
                cin >> e[i][j];
                mpp[e[i][j]]++;
            }
        }
        bool f1 = false;
        for (int i = 0; i < n; i++)
        {
            bool f = true;

            for (int bit : e[i])
            {
                if (mpp[bit] == 1)
                {
                    f = false;
                    break;
                }
            }
            if (f)
            {
                f1 = true;
                break;
            }
        }
        if (f1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}