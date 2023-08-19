#include <iostream>
#include <memory>
using namespace std;
class Test
{
    int x;

public:
    Test(int a = 0)
    {
        x = a;
        cout << "Constructor called\n";
    }
    ~Test()
    {
        cout << "Destructor\n";
    }
    void fun()
    {
        cout << x << "\n";
    }
};

int main()
{
    cout << "Main\n";
    {
        unique_ptr<Test> ptr = make_unique<Test>(10);
        ptr->fun();
    }
    cout << "Main ends";
}
