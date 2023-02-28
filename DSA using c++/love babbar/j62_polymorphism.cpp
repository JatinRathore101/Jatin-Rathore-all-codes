#include<bits/stdc++.h>
using namespace std;

/*
-compile time polymorphism (overloading) - static
->function overloading => multiple functions (independent or member functions) with same name with differing in arguments
->operator overloading

-run time polymorphism (overriding) - dynamic
->method overriding => possible through inheritance only
*/

// operator overloading // most of the operators can be overloaded except few

class AAA
{
public:
    int x;

    AAA(int x=10)
    {
        this->x=x;
    }

    void operator+ (AAA a)
    {
        cout<<this->x-a.x<<endl;
    }

    void operator+ ()
    {
        cout<<this->x<<endl;
    }
};

/*
void operator- ()  // this also gives error //
{
    cout<<"ChatGPT"<<endl;
} */

int main()
{
    AAA a,b(3);
    a+b;
    // a+; will give error;
    +a;
    return 0;
}

