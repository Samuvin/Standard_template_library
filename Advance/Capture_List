#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 10;
    auto lambda_expr = [&](int a) // access variables of enclosing environment
    {
        x = x + a;
        y = y + a;
    };
    lambda_expr(20);
    cout << x << " " << y;
}

/*
The capture list defines the outside variables that are accessible 
from within the lambda function body
*/
