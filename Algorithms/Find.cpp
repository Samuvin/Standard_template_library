#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v = {5, 10, 7, 10, 20};
    auto it = find(v.begin(), v.end(), 10);
    if (it == v.end())
        cout << "Not found"
             << "\n";
    else
    {
        cout << "found at" << (it - v.begin());
    }
    cout << "\n";
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int *ptr = find(arr, arr + 7, 4);
    if (ptr == arr + 7)
        cout << "Not found"
             << "\n";
    else
    {
        cout << "found at" << (ptr - arr);
    }

    // list
    list<int> l = {1, 2, 3, 4, 5, 6, 7, 8};
    auto it2 = find(l.begin(), l.end(), 5);
    if (it2 == l.end())
        cout << "Not found"
             << "\n";
    else
    {
        cout << "found at";
    }
}
