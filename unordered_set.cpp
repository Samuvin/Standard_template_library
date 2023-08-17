#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// in unordred set the only difference is it is not in ordered form
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    for (auto &it : s)
    {
        cout << it << " ";
    }
    cout << "\n";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << s.size() << " ";
    // clear the container
    if (s.find(15) == s.end())
        cout << "Not Found";
    else
    {
        cout << "Found"
             << " " << *s.find(15);
    }
    cout << "\n";
    // count return 1 if present no 0 no duplicate
    // erase fn to remove a element or range of item
    s.erase(15);
    cout << s.size() << "\n";
}
