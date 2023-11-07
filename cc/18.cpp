#include <bits/stdc++.h>

using namespace std;

void solve(int a[], int n)
{
    int low = 0;
    int high = n - 1;

    int mid = (low + (high - low) / 2);

    while (low < high)
    {
        if (a[mid] >= a[mid + 1])
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
        mid = (low + (high - low) / 2);
    }

    cout << mid;
}

int main()
{
    int n = 6;
    int a[] = {3, 5, 6, 7, 8, 1};
    solve(a, n);
    return 0;
}