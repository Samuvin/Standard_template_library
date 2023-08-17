 #include<iostream>
 using namespace std;
//  struct point
//  {
//     int x;
//     int y;
//  };
//  int main()
// {
//     point p;  //struct point p
//     p.x=10;
//     p.y=20;
//     cout<<p.x<<" "<<p.y;
// }
// struct student
// {
//     int rollno;
//     string name;
//     string address;
// };
// int main()
// {
//     student s={101,"ABC","xyz"};
//     cout<<s.rollno<<endl;
//     cout<<s.name<<endl;
//     cout<<s.address<<endl;
// }

struct point 
{
    int x;
    int y;
};

int main()
{
    struct point p={.x=20};
    cout<<p.y<<" ";
    cout<<p.x;
}
