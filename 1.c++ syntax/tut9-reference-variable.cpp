#include<iostream>
using namespace std;
int main()
{
    // refrence variable - same ans single variable but more than 1 names
    int a=10;
    int &b=a;
    int &c=a;
    int &d=b;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n";
    // for &b=a; using &d=&b is wrong syntax, &d=b is correct.


    return 0;
}
