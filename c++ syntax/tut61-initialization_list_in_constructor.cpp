#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

This is just a method to initialize variables in constructor before the body of constructor if it is very complex

*/

class Test
{
    int a; // in class a is mentioned first so it should be initialized first
    int b;

public:
    // Test(int i, int j) : a(i), b(j)   // This will work fine
    // Test(int i, int j) : b(j), a(i+b) // This will give garbage value as in class a is mentioned first so it should be initialized first
    Test(int i, int j) : a(i), b(a+j)    // This will work fine
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}

