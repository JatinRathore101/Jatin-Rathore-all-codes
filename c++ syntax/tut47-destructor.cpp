#include<iostream>
using namespace std;

//Demonstrating destructor

static int n=0;

class coordinates
{
    int x;
    int y;
public:
    coordinates()
    {
        n++;
        cout<<"\nObject number "<<n<<" constructor";
        x=y=0;
    }
    coordinates(int a,int b)
    {
        n++;
        cout<<"\nObject number "<<n<<" constructor";
        x=a;y=b;
    }
    ~coordinates()
    {
        cout<<"\nObject number "<<n<<" destructor";
        n--;
    }
};

int main()
{
    cout<<"\nEntering main()";
    cout<<"\nCreating object P1";
    coordinates P1;
    {
        cout<<"\nEntering block";
        cout<<"\ncreating P2 and P3";
        coordinates P2,P3;
        cout<<"\nExiting block";
    }
    cout<<"\nExiting main()";
    return 0;
}


/*

In a big code we need to free the the memory
allocated to an object after its use or scope ends.

For This purpose we need destructors.
Called using tilde operator and class name  ~class_name()

Destructor function is automatically invoked when the objects are destroyed.

It cannot be declared static or const.

The destructor does not have arguments.

It has no return type not even void.

An object of a class with a Destructor cannot become a member of the union.

A destructor should be declared in the public section of the class.

The programmer cannot access the address of destructor.

*/


