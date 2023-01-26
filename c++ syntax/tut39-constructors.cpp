#include<iostream>
using namespace std;

/*
constructors of a class

previously we used an another function like say setdata()
and invoked it with objet like obj.setdata() to enter data
and allocate memory to obj

constructors are member functions to add data to created objects at runtime

They have same name as the class name and is/are automatically invoked when the object is created during runtime.

constructor has no return type, even typing void in constructor declaration is error

but rest all member function must have a return type
*/
static int n=0;

class coordinate
{
    int x;
    int y;
public:
    coordinate(); // constructor has no return type
    void getdata(); // member function has void return type
};

coordinate ::coordinate()
{   n++;
    cout<<"\nDefault constructor called for object number "<<n;
    x=1;
    y=1;
}

void coordinate ::getdata()
{
    cout<<"\nThe coordinates of object number "<<n<<" are ("<<x<<","<<y<<")";
}

int main()
{
    coordinate P1;
    P1.getdata();
    coordinate P2;
    P2.getdata();
    cout<<"\n\n";
    return 0;
}

/*
--- Characteristics of constructors ---

Should be declared in public section of the class

Automatically invoked whenever the object is called

cannot return values and do not have return types

can have default arguments

constructor overloading {more than one constructor} is possible

We cannot refer to their address

*/
