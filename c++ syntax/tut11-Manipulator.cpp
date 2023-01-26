#include<iostream>
#include<iomanip>


using namespace std;

/* Manipulators help in formatting data display of data
 example endl;
 ssetw() is a manipulator function in iomanip which
  ensures the digit space taken by the value of variable
  when displayed and is right justified */

int main()
{
    int a=10 , b=1299 , c=100000;
    float d = 1.91 , e=78.3345;

    // Remember decimal also takes one space

    cout<<"The value of a without setw() : "<<a<<endl;
    cout<<"The value of b without setw() : "<<b<<endl;
    cout<<"The value of c without setw() : "<<c<<endl;
    cout<<"The value of d without setw() : "<<d<<endl;
    cout<<"The value of e without setw() : "<<e<<endl;


    cout<<"The value of a with setw() : "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw() : "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw() : "<<setw(4)<<c<<endl;
    cout<<"The value of d with setw() : "<<setw(4)<<d<<endl;
    cout<<"The value of e with setw() : "<<setw(4)<<e<<endl;

return 0;
}
