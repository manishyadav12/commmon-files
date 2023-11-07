#include <bits/stdc++.h>
using namespace std;

class prot
{
private:
    int health;
    char level;

public:
    void print()
    {
        cout << level << endl;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
};

int main()
{
    prot p;

    cout << p.getHealth() << endl;
    cout << p.getLevel() << endl;

    return 0;
}