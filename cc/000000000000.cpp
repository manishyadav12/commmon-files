#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int x, k;
    cin >> x >> k;
    int sum = 0;
    for (int i = x; i <= INT_MAX; ++i)
    {
        int num = x;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
            if (sum % k == 0)
            {
                cout << sum << endl;
                break;
            }
        }
        if (i != INT_MAX)
            break;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}