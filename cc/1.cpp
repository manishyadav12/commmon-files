#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i)
    {
        cout << "[";
        for (int j = i; j < 5; ++j)
        {
            cout << a[j] << ",";
        }
        cout << "],";
    }

    return 0;
}