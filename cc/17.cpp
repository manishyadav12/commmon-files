#include <bits/stdc++.h>

using namespace std;

void solve(int a[], int n, int mid)
{

    if (a[mid - 1] < a[mid] && a[mid] > a[mid + 1])
    {
        cout << a[mid];
        return;
    }

    if (a[mid] < a[mid + 1] && a[mid + 1] < a[mid + 2])
    {
        solve(a, n - mid, ((mid + 1) + n) / 2);
    }
    else
        solve(a, mid - 1, (mid - 1) / 2);
}

int main()
{

    int n;
    cout << "Enter array size" << endl;
    cin >> n;
    cout << "Enter the array" << endl;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mid = (n - 1) / 2;
    solve(a, n, mid);

    return 0;
}