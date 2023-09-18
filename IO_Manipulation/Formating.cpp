#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=12;
    cout<<setw(5);
    cout<<setfill('*');
    cout<<a<<"\n";
    cout<<setw(5);
    cout<<"HI"<<"\n";
    cout<<left;
    cout<<setw(5);
    cout<<a<<"\n";
    return 0;
}
