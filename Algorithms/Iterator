/*
it returns the address mostly use in algorithm which receive two input as input
work like pointers
*/
// begin gives the address of the first element
// next gives the

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    vector<int>::iterator i = v.begin(); // auto i;
    cout << (*i) << " ";
    i++;
    cout << (*i) << " ";
    i = v.end(); // gives the addres after the last element to access last element we have to use i--
    i--;
    cout << (*i) << " "
         << "\n";

    // next() and prev()
    vector<int> v_2 = {12, 13, 14, 15, 16, 17};
    vector<int>::iterator i_2 = v_2.begin(); // gives the address of begin that is 12
    i_2 = next(i_2);                         // moves to next value if no parameters pass
    cout << (*i_2) << " ";
    i_2 = next(i_2, 2); // moves the current value to next 2 position
    cout << (*i_2) << " ";
    i_2 = prev(i_2);
    cout << (*i_2) << " "
         << "\n";

    // advance()
    //  it modifies the same passed iterators
    //  it moves the iterator to n position
    vector<int> lis = {10, 20, 30, 40, 50};
    vector<int>::iterator n = lis.begin();
    advance(n, 3);
    cout << (*n) << " ";
    return 0;
}

/*
Types of iterators

Input     Output

    Forward

    Bidirectional

    random

They are logical classification

input iterator we can only read the no assignment also i++ ++i can we used

output iterator allows only to write can access using ++i or --i

forward can read and write move forward only

bidirectional we can move front and back

random access can move forward backward and read and write and get nth item and comapre two items

Simple

forward_list   - forward
list           - bidirectional
vector         - random

Associative

Bidirectional

set
map
multiset
multimap

forward

unordered map
unordered set

adaptors

no not have iterators
stack
queue


set


*/
