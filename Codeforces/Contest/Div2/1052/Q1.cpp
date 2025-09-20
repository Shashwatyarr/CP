
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
            cout << 2 << endl;
        else if (b >= 2 && a - b >= 2)
            cout << 3 << endl;
        else
            cout << -1 << endl;
    }
}