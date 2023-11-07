#include <bits/stdc++.h>

using namespace std;

void solve(int a[], int n, int k)
{
    int j = 0, i = 0;
    int sum = 0;
    int mx = INT_MIN;
    while (j < n)
    {
        sum += a[j];
        if ((j - i + 1 < k))
            j++;
        if ((j - i + 1) == k)
        {
            mx = max(mx, (j - i + 1));
            sum -= a[i];
            i++;
            j++;
        }
    }
    return mx;
}

int main()
{
}