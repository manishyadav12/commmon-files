#include <bits/stdc++.h>

using namespace std;

void solve(int a[], int n, int k)
{
    int i = 0, j = 0;
    int mx = INT_MIN;
    int sum = 0;
    while (j < n)
    {
        sum -= a[j];
        if ((j - i + 1) < k)
            j++;
        else if ((j - i + 1) == k)
        {
            mx = max(mx, sum);
            sum -= a[i];
            i++;
            j++;
        }
    }
    cout << mx << endl;
}

int main()
{
}