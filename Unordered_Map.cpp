// key,value pair
// keys are always unique and but the map is unordered
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> mp;
    mp[0] = 1;
    mp[3] = 1;
    mp[2] = 5;
    mp[1] = 6;
    mp[5] = 19;
    mp.insert(pair<int, int>(6, 40)); // sorted accorind to the key
    mp[1] = 100;                      // overwrite
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << "\n";
    }
    cout << mp.size() << "\n";
    cout << mp.empty() << "\n";
    cout << mp[2] << "\n";
    cout << mp[12] << "\n";
    //
    unordered_map<string, int> m;
    m["abc"] = 20;
    m["def"] = 30;
    m["ghi"] = 40;
    if (m.find("abc") != m.end())
        cout << "Found"
             << "\n"
             << m.find("abc")->second << "\n";
    else
    {
        cout << "Not Fount"
             << "\n";
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << "\n";
    }
    cout << m.size() << "\n";
    cout << m.erase("abc");
}
