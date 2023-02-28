#include<bits/stdc++.h>
using namespace std;

/*
Also known as function overriding, method overriding is an
example of runtime polymorphism
https://www.geeksforgeeks.org/function-overriding-in-cpp/
*/

class Parent {
public:
    void GeeksforGeeks_Print()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void GeeksforGeeks_Print()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Child Child_Derived;
    Child_Derived.GeeksforGeeks_Print();
    return 0;
}
