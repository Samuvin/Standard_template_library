#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {1, -4, 2, 67, -43, -6, 5, 76, -3};
    sort(arr, arr + 9, [](int x, int y)
         { return abs(x) < abs(y); });
    for (int x : arr)
    {
        cout << x << " ";
    }
}
