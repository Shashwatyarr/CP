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
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[a[i]]++;
        }
        vector<int> m;
        for (auto i : mpp)
        {
            m.push_back(i.second);
        }
        if (mpp.size() <= 2)
        {
            if (mpp.size() == 2)
            {
                if (abs(m[0] - m[1]) < 2)
                    cout << "YES" << endl;
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (mpp.size() == 1)
                cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}