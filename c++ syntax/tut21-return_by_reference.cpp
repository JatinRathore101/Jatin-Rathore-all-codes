#include <iostream>
using namespace std;

// Return by reference
// Function to return as return by reference
int &returnValue(int &x)
{
    cout<<"x = "<<x<<" The address of x is "<<&x<<endl;
    // Return reference
    return x; // here only x returned not &x
}


int main()
{
    int a = 20,&b = returnValue(a); // since return x => &b=x and &x=a => &b=a

    cout << "a = " << a<< " The address of a is "<< &a << endl;

    cout << "b = " << b<< " The address of b is "<< &b << endl;

    // We can also change the value of
    // 'a' by using the address returned
    // by returnValue function

    // Since the function returns an alias
    // of x, which is itself an alias of a,
    // we can update the value of a
    returnValue(a) = 13;   // x=13 but x is another name for a, now x=a=b=13

    // The above expression assigns the
    // value to the returned alias as 3.
    cout << "a = " << a
         << " The address of a is "
         << &a << endl;
    cout << "b = " << b
         << " The address of b is "
         << &b << endl;
/*
    cout << "x = " << x
         << " The address of x is "
         << &x << endl;

         This statement becomes invalid because x does not have scope out of function.

*/

    return 0;
}
