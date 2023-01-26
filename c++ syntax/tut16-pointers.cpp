#include<iostream>
using namespace std;

int main()
{ /* Pointers in C++
     Pointers are basically a datatype in C++ which hold the
     address of other variables.
  */
    int a=3;
    int* b=&a;
    int &c=a;   // c is simple refrence variable ie..  other name of a
    cout<<"\n\nHere int* is basically declaring a variable \nwhich points to another integer type variable. \nBasically int8 creates a pointer variables which \ncan hold address of int types"<<endl;
    //  *   In context of pointer this is called derefrence operator (Value at address) operator
    //  &   in context of pointer this is called address of operator
    cout<<"\n\nValue of a = "<<a<<endl;
    cout<<"\nValue of &a = "<<&a<<endl;
    cout<<"\nValue of b = "<<b<<endl;
    cout<<"\nValue of c = "<<c<<endl;
    cout<<"\nValue of *b = "<<*b<<endl<<endl<<endl;

    /* Further no we are creating a pointer to pointer variable.
       Our pointer variable b also has some address.
       Pointer to pointer of b is declared by int**
    */

    int** d=&b;
    cout<<"\n\nValue of &b = "<<&b<<endl;
    cout<<"\nValue of d = "<<d<<endl;
    cout<<"\nValue of *d = "<<*d<<endl;
    cout<<"\nValue of **d = "<<**d<<endl;

    return 0;
}
