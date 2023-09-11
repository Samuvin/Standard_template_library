#include <iostream>
using namespace std;

void f1()
{
    cout << "F1 begin\n";
    throw 100;
    cout << "F1 end\n";
}

void f2()
{
    cout << "F2 begin\n";
    f1();
    cout << "F2 end\n";
}

void f3()
{
    cout << "F3 begin\n";
    try
    {
        f2();
    }
    catch (int i)
    {
        cout << "caught exception\n";
    }
    cout << "F3 end\n";
}

int main()
{
    f3();
}
