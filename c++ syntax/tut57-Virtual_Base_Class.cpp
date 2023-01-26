#include <iostream>
using namespace std;

// Virtual Base Class //   A-->(B C)-->D   // here A is virtual base class

class A
{
public:
    void say()
    {
        cout << "Hello world"<<endl;
    }
};

class B : public virtual A   // Removing virtual shows error : request for member 'say' is ambiguous
{
};

class C : public virtual A
{
};

class D : public B, public C
{
};

int main()
{
    D d;
    d.say();
}
