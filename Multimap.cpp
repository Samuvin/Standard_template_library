#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, int> mp;
    mp.insert({1, 10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({1, 40});
    mp.insert({2, 50});
    mp.insert({3, 60});
    mp.insert({4, 70});
    mp.insert({6, 70});
    mp.insert({7, 70});
    mp.insert({7, 70});
    for (auto it : mp)
        cout << it.first << " " << it.second << "\n";
    cout << mp.count(3) << "\n";
    mp.erase(6);
    // lower_bound
    auto it = mp.lower_bound(3), it2 = mp.upper_bound(3);
    cout << (*it).first << "\n";
    cout << (*it2).first << "\n";
    // equal range
    multimap<int, int> mp1;
    mp1.insert({10, 5});
    mp1.insert({50, 1});
    mp1.insert({20, 3});
    mp1.insert({20, 2});
    auto it1 = mp1.equal_range(20);
    for (auto iter = it1.first; iter != it1.second; iter++)
    {
        cout << iter->first << " " << iter->second << " ";
    }
}
