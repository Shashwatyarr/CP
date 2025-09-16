#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int mini = INT_MIN, a, b = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mini = max(mini, abs(b - a));
            b = a;
        }
        mini = max(mini, 2 * abs(a - x));
        cout << mini << endl;
    }
    return 0;
}