#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, a;
    cin >> size;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        pq.push(a);
    };
    cout << pq.size() << " "
         << "\n";
    cout << pq.top() << " "
         << "\n";
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
    // using array as heap(priority-queue<int> pq(arr,arr+n));
}


//#include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 2, 34, 15};
//     for (int i = 0; i < 4; i++)
//     {
//         arr[i] = -arr[i];
//     }
//     priority_queue<int> pq(arr, arr + 4);
//     cout << pq.top() * -1 << "\n";
//     while (!pq.empty())
//     {
//         cout << (pq.top() * -1) << " ";
//         pq.pop();
//     }
// }
