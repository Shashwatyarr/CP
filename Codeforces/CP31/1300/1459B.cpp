#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    if (n % 2 == 0)
    {
        int half = n / 2;
        ans = (half + 1) * (half + 1);
    }
    else
    {
        int h1 = n / 2 + 1, v1 = n / 2;
        int h2 = n / 2, v2 = n / 2 + 1;
        ans = (h1 + 1) * (v1 + 1) + (h2 + 1) * (v2 + 1);
    }
    cout << ans << endl;
}
