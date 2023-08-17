#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // stack  which use LIFO (Last in first out) principle

    stack<int> stac;
    stac.push(21);
    stac.push(22);
    stac.push(23);

    // top 23   23 22 21

    stac.pop();
    // remove top 23
    stac.push(245);
    // top 245
    stac.pop();
    // remove 245
    cout << stac.size() << "\n";
    while (!stac.empty())
    {
        cout << stac.top() << " ";
        // after printing top removing top
        stac.pop();
    }
    return 0;
    /*
    implemented using deque
    */
}
