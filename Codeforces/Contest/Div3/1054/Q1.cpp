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
        int c = 0;
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == -1)
                c += 1;
            if (a[i] == 0)
                z += 1;
        }
        if (c % 2 == 1)
            cout << z + 2 << endl;
        else
            cout << z << endl;
    }
}