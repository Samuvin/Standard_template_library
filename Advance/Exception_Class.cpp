#include <iostream>
using namespace std;

class MyException : public exception
{
    virtual const char *what() const throw()
    {
        return "Exception Occured\n";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (exception &e1)
    {
        cout << e1.what();
    }
}
