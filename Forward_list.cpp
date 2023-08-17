#include <iostream>
#include <forward_list>
// implement singly_linked_list
using namespace std;
int main()
{
    forward_list<int> l = {10, 25, 30};
    l.push_front(5);
    l.push_front(24);
    l.pop_front(); // 24 popped
    for (int i : l)
    {
        cout << i << " ";
    }
    // assign_function_internallu it creates a new linked list and assign to old list
    cout << "\nAssign_function\n";
    forward_list<int> lis;
    lis.assign({1, 2, 3, 4, 5, 10, 10});
    lis.remove(10); // remove all occurance
    for (auto i = lis.begin(); i != lis.end(); i++)
    {
        cout << (*i) << " ";
    }
    // assign function can be used to assign one list to other list
    forward_list<int> lis2;
    lis2.assign(lis.begin(), lis.end());
    cout << "\nlist_2\n";
    for (auto i = lis2.begin(); i != lis2.end(); i++)
    {
        cout << (*i) << " ";
    }
    // assign can be used to create a linked list with size 5 and all values as 10
    forward_list<int> lis3;
    lis3.assign(5, 20);
    cout << "\nlist-3\n";
    for (auto i = lis3.begin(); i != lis3.end(); i++)
    {
        cout << (*i) << " ";
    }

    // More function;

    forward_list<int> lis4 = {15, 20, 30};
    auto it = lis4.insert_after(lis4.begin(), 10); // 15 10 20 30 place the element after the iterator
    it = lis4.insert_after(it, {2, 3, 5});         // can pass initializer list 15 10 2 3 5 20 30
    it = lis4.emplace_after(it, 40);               // optimize insert large object
    it = lis4.erase_after(it);//can pass begin and end iterator                 //
    for (int x : lis4)
        cout << x << " ";

    //clear(),empty(),merge()-merge two sorted list all the elements in the second list go to the first list second list will be empty just as merge sort
    //reverse()-reverse the content of the forward_list,sort()

    return 0;
}
