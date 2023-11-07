#include <iostream>
#include <Math.h>
using namespace std;

bool checkArmstrong(int n)
{
    // Write your code here
    int num = n, count = 0;
    while (n != 0)
    {

        num /= 10;
        count++;
    }

    int ans = 0;
    int num2 = n;
    while (n > 0)
    {
        num2 %= 10;
        ans = ans + pow(num2, count);
    }

    if (ans == n)
        return true;
    else
        false;
}

int main()
{
    cout << "Enter N" << endl;
    int n;
    cin >> n;
    cout << checkArmstrong(n);
    return 0;
}