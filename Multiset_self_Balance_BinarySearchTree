#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(20);
    for (auto x : ms)
    {
        cout << x << " ";
    }
    cout << '\n';
    // erase all occurence
    multiset<int> ms1;
    ms1.insert(10);
    ms1.insert(20);
    ms1.insert(10);
    ms1.insert(20);
    ms1.insert(30);
    ms1.insert(30);
    ms1.erase(10);
    for (auto x : ms1)
    {
        cout << x << " ";
    }
    cout << "\n";
    // count return the count of the element
    multiset<int> ms2;
    ms2.insert(10);
    ms2.insert(20);
    ms2.insert(10);
    ms2.insert(30);
    ms2.insert(30);
    ms2.insert(30);
    cout << ms2.count(30) << "\n";
    // lower_bound
    multiset<int> ms3;
    ms3.insert(10);
    ms3.insert(20);
    ms3.insert(10);
    ms3.insert(30);
    ms3.insert(30);
    ms3.insert(40);
    cout << *ms3.upper_bound(20) << "\n";
    cout << *ms3.lower_bound(10) << "\n";
    // equal_range() return a pair of iterator lower bound and upper bound
    multiset<int> ms4;
    ms4.insert(10);
    ms4.insert(20);
    ms4.insert(10);
    ms4.insert(30);
    ms4.insert(30);
    ms4.insert(40);
    auto it2 = ms4.equal_range(20);
    cout << *it2.first << " " << *it2.second << "\n";
    
}
