#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    //used to insert_elements in the vector

    vec.push_back(10);
    vec.push_back(5);
    vec.push_back(20);

    cout << "Method-1\n";

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";                  // index accessing not check array index out of bound checking if out of bound crash
    }
    cout << "\n";

    cout << "Method-2\n";

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";               // index accessing check array index out of bound and throw exception
    }
    cout << "\n";

    cout << "Method-3\n";

    vector<int> vec2{12, 23, 27};
    for (int x : vec2)
        cout << x << " ";                       // unable to update
    cout << "\n";
  
    // if we need to update we  need to pass reference

    for (int &x : vec2)
        x = 6;
    for (int x : vec2)
        cout << x << " ";
    cout << "\n";

    cout << "Method-4\n";
    // using iterator

    vector<int> vec3(5, 10);
    for (auto it = vec3.begin(); it != vec3.end(); it++)           // auto or vector<int>::iterator
        cout << (*it) << " ";

    cout << "\nMethod-5-Reverse Iterator\n";

    int arr[] = {9, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec4(arr, arr + n);
    for (auto it = vec4.rbegin(); it != vec4.rend(); it++)         // used to reverse iterate
        cout << (*it) << " ";

    // Functions

    cout << "\nFunctions_in_vector\n";
    cout << "\npop.back(),front(),back()\n";

    vector<int> v1{12, 23, 34, 45, 6};
    v1.pop_back();
    v1.front() = 100;                                               // can change the values
    cout << v1.front() << " "
         << "\n";
    cout << v1.back() << " "
         << "\n";

    cout << "\ninsert at given position\n"
         << " ";
    vector<int> v2{12, 23, 34, 45, 6};
    auto it = v2.insert(v2.begin(), 100);                         // return the position where it has been inserted
    for (auto x : v2)
        cout << x << " "
             << "\n";
    cout << "\n";

    v2.insert(v2.begin() + 2, 200);
    for (auto x : v2)
        cout << x << " ";
    cout << "\n";

    v2.insert(v2.begin(), 2, 300);

    for (auto x : v2)
        cout << x << " ";
    cout << "\n";
    vector<int> v3;
    v3.insert(v3.begin(), v2.begin(), v2.begin() + 3);
    for (auto x : v3)
        cout << x << " ";
    cout << "\n";

    cout << "\nErase()\n";

    vector<int> v4{123, 456, 45, 87, 33, 564, 1234, 65, 786};
    v4.erase(v4.begin()); // take iterator
    for (auto x : v4)
        cout << x << " ";
    cout << "\n";
    v4.erase(v4.begin(), v4.end() - 4);
    for (auto x : v4)    
        cout << x << " ";
    cout << "\n";

    cout << "\nempty() and clear()\n";

    vector<int> v5{1, 2, 3, 4, 5, 6, 7};
    v5.clear();
    cout << v5.size() << "\n";
    if (v5.empty() == true)
        cout << "Empty\n";
    else
        cout << "Not Empty\n";

    cout << "\nresize\n";
          
    vector<int> v6{1, 2, 3, 4, 5, 6};
    v6.resize(3);
    for (auto x : v6)
        cout << x << " ";
    cout << "\n";

    v6.resize(10);
    for (auto x : v6)
        cout << x << " ";
    cout << "\n";

    v6.resize(16, 100);
    for (auto x : v6)
        cout << x << " ";
    cout << "\n";
}
