#include <iostream>
using namespace std;

template <typename T>
T mymax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << mymax<int>(4, 5) << "\n";
    cout << mymax<double>(8.5, 4.0) << "\n";
    cout << mymax<char>('g', 's') << "\n";
}

/*
#include <iostream>
using namespace std;

template <class T>
void bubblesort(T arr[], T n)
{
    int flag = true;
    while (flag)
    {
        flag = false;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                swap(arr[i], arr[i - 1]);
                flag = true;
            }
        }
        if (flag == false)
            break;
    }
}
int main()
{
    int a[6] = {10, 50, 2, 45, 65};
    int n = sizeof(a) / sizeof(a[0]);
    bubblesort<int>(a, n);
    cout << "Printing values.........."
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
*/


