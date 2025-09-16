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
        vector<char> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int count = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                count++;
                if (count == 3)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }

        if (flag)
            cout << 2 << endl;
        else
        {
            count = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '.')
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}