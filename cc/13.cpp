#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int a[n];
    cout << "Enter the array" << endl;
    cin >> n;
    cout << "Input Array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(i);
    }

    for (auto i : s)
    {

        cout << i << endl;
    }

    return 0;
}