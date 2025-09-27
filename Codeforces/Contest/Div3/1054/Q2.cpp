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
        sort(a.begin(), a.end());
        int maxi = INT_MIN;
        for (int i = 0; i < n - 1; i += 2)
        {
            maxi = max(maxi, abs(a[i] - a[i + 1]));
        }
        cout << maxi << endl;
    }
}