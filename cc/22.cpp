#include <bits/stdc++.h>
using namespace std;

int sol(int n, int lm, int hm)
{

    vector<vector<int>> dp(n, vector<int>(hm - lm + 1, 1));
    int ans = hm - lm + 1 + n - 1;

    for (int i = 1; i < dp[0].size(); i++)
    {
        dp[0][i] += dp[0][i - 1];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < dp[0].size(); j++)
        {
            ans += dp[i - 1][j];
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    return ans;
}

int main()
{
    sol(1, 2, 3);
}