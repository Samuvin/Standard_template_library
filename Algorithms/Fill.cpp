#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40};
    fill(v.begin(), v.end(), 5);
    for (int x : v)
        cout << x << " ";
    cout << '\n';
    vector<int> v2 = {10, 20, 30, 40, 45, 56, 43};
    fill(v2.begin() + 1, v2.end() - 2, 59);
    for (int x : v2)
        cout << x << " ";
    cout << "\n";
    // array

    int arr[] = {10, 20, 30, 40};
    fill(arr, arr + 4, 6);
    for (int x : arr)
        cout << x << " ";

    // list
    list<int> l = {10, 20, 30, 40};
    fill(l.begin(), l.end(), 7);
    for (int y : l)
        cout << y << " ";
    cout << "\n";

    // string
    string s = "hello world";
    fill(s.begin() + 3, s.end(), 'g');
    cout << s;
}
