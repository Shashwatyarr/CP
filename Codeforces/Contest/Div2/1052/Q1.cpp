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
        {
            cin >> a[i];
        }
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[a[i]]++;
        }
        int maxi = INT_MIN;
        for (auto it : mpp)
        {
            maxi = max(it.second, maxi);
        }
        int c = 1;
        int summ = 0;
        while (c != maxi + 1)
        {
            int sum = 0;
            for (auto it : mpp)
            {
                if (it.second >= c)
                    sum += c;
            }
            summ = max(summ, sum);
            c++;
        }
        cout << summ << endl;
    }
}