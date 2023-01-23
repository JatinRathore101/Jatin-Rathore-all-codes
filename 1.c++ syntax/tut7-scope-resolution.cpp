#include<iostream>
using namespace std;

int a=2;

int main()
{
    int a=1;
    cout<<"local a is: "<<a<<endl;
    cout<<"global a is: "<<::a<<endl; //  the scope resolution operator :: is used for another a
    return 0;
}
