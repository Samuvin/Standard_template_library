#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {10, 15, 8, 20};
    sort(arr, arr + 4);
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    cout << endl;
    if (binary_search(arr, arr + 4, 8)) // returns boolean
        cout << "Present";
    else
        cout << "Not Present";
}



#include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// struct point
// {
//     int x, y;
//     point(int i, int j)
//     {
//         x = i;
//         y = j;
//     }
// };
// bool mycomp(point p1, point p2)
// {
//     return p1.x < p2.x;
// }
// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int x = 4;
//     if (binary_search(v.begin(), v.end(), x) == true)
//         cout << "Found"
//              << "\n";
//     else
//         cout << "Not found"
//              << "\n";

//     // array
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int y = 5;
//     if (binary_search(arr, arr + 10, y) == true)
//         cout << "Found"
//              << "\n";
//     else
//         cout << "Not found"
//              << "\n";

//     // user defined

//     vector<point> v5 = {{10, 5}, {2, 100}, {50, 90}};
//     sort(v5.begin(), v5.end(), mycomp);
//     point p(2, 100);
//     if (binary_search(v5.begin(), v5.end(), p, mycomp) == true)
//         cout << "Found"
//              << "\n";
//     else
//         cout << "Not found"
//              << "\n";
// }
