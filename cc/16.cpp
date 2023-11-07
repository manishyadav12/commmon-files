#include <bits/stdc++.h>

using namespace std;

void solve(int a[], int n, int k)
{
    int i = 0, j = 0;
    int sum = 0;
    int mx = INT_MIN;
    while (j < n)
    {
        sum += a[j];
        if (j - i + 1 < k)
            j++;
        else if ((j - i + 1) == k)
        {
            mx = max(sum, mx);
            sum -= a[i];
            i++;
            j++;
        }
    }
    cout << mx << endl;
}

int main()
{

    int k, n;
    cin >> k;
    int a[n];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    solve(a, n, k);
    return 0;
}