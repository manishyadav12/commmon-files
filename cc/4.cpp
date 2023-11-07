#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Manish";
    int n = s.length();
    // cout << n;
    for (int i = 0; i < n; ++i)
    {
        s[i] = s[n - i + 1];
    }
    cout << s;

    return 0;
}