#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a, long long k)
{
    int l = 0, r = 0;
    long long sum = a[0];
    int mxlen = 0;
    int n = a.size();
    while (r < n)
    {
        while (l < r && sum > k)
        {
            sum -= a[l];
            l++;
        }
        if (sum == k)
            mxlen = max(mxlen, r - l + 1);
        r++;
        if (r < n)
            sum += a[r];
    }
    cout << mxlen;
}

int main()
{
    return 0;
}