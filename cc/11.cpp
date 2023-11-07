#include <iostream>
using namespace std;

int nCr(int r, int c)
{
    long long res = 1;
    for (int i = 0; i < c; i++)
    {
        res = res * (r - i);
        res = res / (i + 1);
    }
    return res;
}

int main()
{

    int r, c;
    cout << "Enter value of r and c: " << endl;
    cin >> r >> c;
    cout << nCr(r, c) << endl;
    ;

    return 0;
}