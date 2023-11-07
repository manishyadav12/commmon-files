#include <bits/stdc++.h>
using namespace std;

class Manish
{
private:
    int age;
    char name;

public:
    void setAge(int a)
    {
        age = a;
    }
    void setName(char nm)
    {
        name = nm;
    }
    int getAge()
    {
        return age;
    }
    char getName()
    {
        return name;
    }
};

int main()
{
    Manish mm;
    mm.setAge(19);
    mm.setName("My Name is Manish");
    cout << mm.getAge() << endl;
    cout << mm.getName() << endl;

    return 0;
}