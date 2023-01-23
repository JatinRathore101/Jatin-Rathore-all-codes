#include<iostream>
using namespace std;

const int a=12;
// Constants in C++ Const keyword
// Fix a value a variable throughout the


int main()
{
// ::a=11;  shows error: assignment of read-only variable 'a'|

const int a=10;

// a=17;  shows error: assignment of read-only variable 'a'|

cout<<"Global const a = "<<::a<<"\nLocal Const a = "<<a;

return 0;
}


/* Const Keyword also has scope limitations
   We use const keyword for values like pi ,
   exponential term e etc . */
