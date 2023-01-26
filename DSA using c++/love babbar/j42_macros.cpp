#include<bits/stdc++.h>
using namespace std;

/*
// https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/ // read Macros and its types from gfg //

A macro is a piece of code in a program that is
replaced by the value of the macro. Macro is defined
by #define directive. Whenever a macro name is
encountered by the compiler, it replaces the name
with the definition of the macro. Macro definitions
need not be terminated by a semi-colon(;).
*/

#define VolCuboid(l,b,h) l*b*h
int main()
{
    double x=10.21,y=2.298,z=5.433;
    cout<<"Volume of cuboid = "<<VolCuboid(x,y,z);

    int A=10;
    cout<<endl<<"Volume of cube = "<<VolCuboid(A,A,A);
    return 0;
}
