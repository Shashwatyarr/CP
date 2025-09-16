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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> comp = arr;
        sort(arr.begin(), arr.end());
        for (int j = comp.size() - 2; j >= 0; j--)
        {

            for (int i = 1; i < comp.size() - 1; i++)
            {
                if (comp[i] > comp[i - 1] && comp[i] > comp[i + 1])
                {
                    swap(comp[i], comp[i + 1]);
                }
            }
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != comp[i])
            {
                flag = false;
                break;
            }
        }

        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}