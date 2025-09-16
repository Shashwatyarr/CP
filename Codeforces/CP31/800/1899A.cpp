#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n)
    {
        int input;
        cin >> input;
        if (input % 3 == 0)
        {
            cout << "Second\n";
        }
        else
        {
            cout << "First\n";
        }
        n--;
    }
    return 0;
}