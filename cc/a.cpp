#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, h, x;
    cin >> n >> h >> x;
    int a[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];

        if ((a[i] + h) >= x)
        {
            cout << i + 1;
            break;
        }
        else
            continue;
    }

    return 0;
}