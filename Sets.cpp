#include <iostream>
#include <set>
using namespace std;
int main()
{
    // first it is in ascending order
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(36);
    s.insert(1);
    s.insert(4);
    for (int x : s)
        cout << x << " ";
    cout << "\n";
    // to make descending;
    set<int, greater<int>> st;
    st.insert(10);
    st.insert(5);
    st.insert(36);
    st.insert(1);
    st.insert(4);
    for (int x : st)
        cout << x << " ";
    cout << "\n";
    // traversing
    set<int, greater<int>> st1;
    st1.insert(10);
    st1.insert(5);
    st1.insert(36);
    st1.insert(1);
    st1.insert(4);
    for (auto it = st1.begin(); it != st1.end(); it++)
        cout << (*it) << " ";
    cout << "\n";
    // reverse iterator;
    set<int, greater<int>> st2;
    st2.insert(10);
    st2.insert(5);
    st2.insert(36);
    st2.insert(1);
    st2.insert(4);
    for (auto it = st2.rbegin(); it != st2.rend(); it++)
        cout << (*it) << " ";
    cout << "\n";
    // ignores duplicate
    set<int, greater<int>> st3;
    st3.insert(10);
    st3.insert(5);
    st3.insert(10);
    st3.insert(10);
    st3.insert(5);
    for (int x : st3)
        cout << x << " ";
    cout << "\n";
    // find function search the element return iterator
    set<int, greater<int>> st4;
    st4.insert(10);
    st4.insert(5);
    st4.insert(101);
    st4.insert(1);
    st4.insert(532);
    auto it = st4.find(101);
    if (it == st4.end())
        cout << "Not found\n";
    else
    {
        cout << "Found\n";
        cout << (*it);
    }
    cout << "\n";
    // clear function
    set<int, greater<int>> st5;
    st5.insert(101);
    st5.insert(5);
    st5.insert(115);
    st5.insert(14210);
    st5.insert(543);
    cout << "size of the set is : " << st5.size() << "\n";
    st5.clear();
    cout << "size of the set is : " << st5.size();
    cout << "\n";
    // count function used in place of find
    set<int, greater<int>> st6;
    st6.insert(10);
    st6.insert(5);
    st6.insert(10);
    st6.insert(10);
    st6.insert(5);
    if (st6.count(10))
        cout << "Found";
    else
        cout << "Not Found";
    cout << "\n";
    // erase function used to remove elements from a set
    set<int, greater<int>> st7;
    st7.insert(10);
    st7.insert(5);
    st7.insert(4);
    st7.insert(34);
    st7.insert(86);
    st7.erase(5);
    auto iter = st7.find(34);
    st7.erase(iter);
    for (int x : st7)
        cout << x << " ";
    cout << "\n";
    // erase in a range
    st7.insert(41);
    st7.insert(42);
    st7.insert(43);
    st7.insert(44);
    st7.insert(45);
    for (int x : st7)
        cout << x << " ";
    cout << "\n";
    auto iter1 = st7.find(42);
    st7.erase(iter1, st7.end());
    for (int x : st7)
        cout << x << " ";
    cout << "\n";
    // lower_bound
    set<int> st8;
    st8.insert(10);
    st8.insert(5);
    st8.insert(36);
    st8.insert(1);
    st8.insert(4);
    auto iter2 = st8.lower_bound(2);
    if (iter2 != st8.end())
        cout << (*iter2) << " "
             << "\n";
    else
        cout << "given element is greater than the largest";
    // upper_bound
    set<int> st9;
    st9.insert(10);
    st9.insert(5);
    st9.insert(36);
    st9.insert(1);
    st9.insert(4);
    auto iter3 = st9.upper_bound(5);
    if (iter3 != st9.end())
        cout << (*iter3) << " "
             << "\n";
    else
        cout << "given element is greater than the largest";
}
