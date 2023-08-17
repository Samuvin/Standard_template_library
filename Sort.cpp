#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct point
{
    int x, y;
    point(int i, int j)
    {
        x = i;
        y = j;
    }
};

bool mycomp(point p1, point p2)
{
    return p1.y < p2.y;
}

int main()
{
    int arr[] = {10, 20, 5, 7};
    sort(arr, arr + 4);
    for (int x : arr)
        cout << x << " ";
    cout << "\n";
    sort(arr, arr + 4, greater<int>());
    for (int x : arr)
        cout << x << " ";
    cout << "\n";
    // vector

    vector<int> v = {5, 7, 20, 10};
    sort(v.begin(), v.end());
    for (int x : v)
        cout << x << " ";
    cout << "\n";
    sort(v.begin(), v.end(), greater<int>());
    for (int x : v)
        cout << x << " ";
    cout << "\n";

    // user defined order
    point arr2[] = {{3, 10}, {2, 8}, {5, 4}};
    sort(arr2, arr2 + 3, mycomp);
    for (auto i : arr2)
        cout << i.x << " " << i.y << " ";
}
