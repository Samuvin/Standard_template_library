#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int myfun(int x, int y)
{
    return x * y;
}
int main()
{
    vector<int> v = {10, 20, 30};
    int res = 0;
    cout << accumulate(v.begin(), v.end(), res);
    cout << "\n";
    //,minus
    vector<int> v2 = {10, 20, 30};
    int res2 = 1000;
    cout << accumulate(v2.begin(), v2.end(), res2, minus<int>()) << "\n";
    // product
    vector<int> v3 = {5, 20, 30};
    int res3 = 12;
    cout << accumulate(v3.begin(), v3.end(), res3, myfun) << "\n";
}
