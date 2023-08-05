#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(5);
    for (auto x : l)
        cout << x << " ";
    cout << "\n";
    list<int> l2 = {1, 2, 3, 4, 5, 6};
    l2.pop_back();
    l2.pop_front();
    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << (*it) << " ";
    }
    list<int> l3 = {11, 12, 32, 24, 15, 16};
    auto it = l3.begin();
    it = l2.insert(it, 15);
    l2.insert(it, 2, 7);
    cout << l2.front() << " " << l2.back() << "\n";
    cout << l2.size() << "\n";
    it = l.erase(it);
    l2.remove(40); // remove all occureance;
    for (auto iter : l2)
    {
        cout << (iter) << " ";
    }
    // unique is used to remove consecutive duplicates
}




// list is like linked list sequence type operations are quite easy
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int> lis1,lis2;
//     for(int i=0;i<5;i++)
//     {
//         lis1.push_back(i);
//         lis2.push_front(i);
//     }

//     cout<<"\nlis1 is : ";
//     for(auto i : lis1)
//     {
//         cout<<i<<" ";
//     }

//     cout<<"\nlis2 is : ";
//     for(auto i : lis2)
//     {
//         cout<<i<<" ";
//     }

//     cout<<"\nlis1.back() : " <<lis1.back();
//     cout<<"\nlis1.front() : " <<lis1.front();

//     cout<<"\nlis1.pop_front() : ";
//     lis1.pop_front();

//     cout<<"\nlis1 is : ";
//     for(auto i : lis1)
//     {
//         cout<<i<<" ";
//     }

//     cout<<"\nlis2 is : ";
//     for(auto i : lis2)
//     {
//         cout<<i<<" ";
//     }

//     cout<<"\nlis2.back() : " <<lis2.back();
//     cout<<"\nlis2.front() : " <<lis2.front();
    
//     lis1.reverse();
//     lis1.sort();
//     // push_back
//     // push_front
//     // pop_front
//     // pop_back
//     // front
//     // back
//     // reverse
//     // sort
//     // size
//     // empty
// }
