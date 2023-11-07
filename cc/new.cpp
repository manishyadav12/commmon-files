#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int a[n];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i + i] - a[i]) != 1)
        {
            cout << a[i] + 1;
            break;
        }
        else
            continue;
    }
    return 0;
}