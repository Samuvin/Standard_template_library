#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 43, 564, 231, 54};
    priority_queue<int> pq(arr, arr + 5);
    cout << pq.top() << "\n";
    for (int i = 0; i < pq.size(); i++)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}
