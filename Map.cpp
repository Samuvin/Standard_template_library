// key,value pair
// keys are always unique and sorted
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    mp[0] = 1;
    mp[3] = 1;
    mp[2] = 5;
    mp[1] = 6;
    mp[5] = 19;
    mp.insert({10, 300});
    mp.insert({10, 400});             // ignored
    mp.insert(pair<int, int>(6, 40)); // sorted accorind to the key                     // overwrite
    for (auto &it : mp)
    {
        cout << it.first << " " << it.second << "\n";
    }
    // if we try to acces the key which is not present in the table it will be get inserted
    map<int, int> mp1;
    mp1.insert({1, 23});
    cout << mp1.size() << "\n";
    cout << mp1[20] << "\n"; // gets inserted value default 0
    mp1[10] = 300;
    mp1[1] = 29;
    cout << mp1.size() << "\n";
    mp1.at(10) = 200; // if key not present throws error
    mp1[1] = 10;
    mp1[2] = 20;
    mp1[3] = 30;
    mp1[4] = 40;
    mp1[5] = 50;
    for (auto it = mp1.begin(); it != mp1.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << "\n";
    }
    // find
    if (mp1.find(3) == mp1.end())
        cout << "NOT FOUND";
    else
        cout << (*mp1.find(3)).first << " " << (*mp1.find(3)).second;
    cout << "\n";
    cout << "printing...."
         << "\n";
    for (auto it = mp1.find(2); it != mp1.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << "\n";
    }
    cout << "\n";
    // count return either 1 or 0
    if (mp1.count(1) == 0)
        cout << "Not found"
             << "\n";
    else
        cout << "Found"
             << "\n";
    // upper found
    cout << "\n";
    map<int, string> mp2;
    mp2.insert({5, "ggg"});
    mp2.insert({2, "hello"});
    mp2.insert({1, "hi"});
    auto it = mp2.lower_bound(2);
    if (it != mp2.end())
        cout << (*it).second << "\n";
    else
        cout << "No equal or greater value"
             << "\n";
    auto it2 = mp2.lower_bound(3);
    if (it2 != mp2.end())
        cout << (*it2).second << "\n";
    else
        cout << "No equal or greater value";
    auto it3 = mp2.lower_bound(7);
    if (it3 != mp2.end())
        cout << (*it3).second << "\n";
    else
        cout << "No equal or greater value"
             << "\n";

    // upper_bound
    map<int, string> mp3;
    mp3.insert({1, "hello"});
    mp3.insert({5, "welcome"});
    mp3.insert({3, "hi"});
    auto it5 = mp3.upper_bound(3);
    if (it5 != mp3.end())
        cout << (*it).second << "\n";
    else
        cout << "not found"
             << "\n";
    mp3.insert({6, "wonder"});
    mp3[1] = 10;
    mp3[2] = 20;
    mp3[3] = 30;
    mp3[4] = 40;
    mp3[7] = 50;
    mp3.erase(6);
    mp3.erase(mp3.find(3));
    mp3.erase(mp3.find(4), mp3.end());
    cout << mp3.size() << "\n";
}
