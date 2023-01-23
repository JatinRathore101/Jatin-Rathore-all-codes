/*
Basically header files are group of functions, keywords etc,
using its functions and keywords we enhence our code.
There are two types of header files:-
1.System header files: Comes with the compiler.
2.User defined header files: Written by the programmer.

When a library of any function or any syntax is
retired(not supported by new compilers)
then that perticular is called as [depricated],
for example <iostream.h> is [depricated] and now we use <iostream> instead of it,
similarly <math.h> is [depricated] and now we use <cmath> instead of it
*/

//Operators in c++
#include<iostream>
using namespace std;
int main()
{
int a=11,b=5;
cout<<"Arithmatic operators"<<endl; // endl; keyword used for ending (changing) line.
cout<<"basics";
cout<<"addition operator: a+b="<<a+b<<endl;
cout<<"substraction operator: a-b="<<a-b<<endl;
cout<<"division operator: a/b="<<a/b<<endl; //result of this will be an integer => only 2 instead of 2.2
cout<<"multiplication operator: a*b="<<a*b<<endl;
cout<<"modulas operator: a%b="<<a%b<<endl;
cout<<"increment operator: a++="<<a++<<endl; // {use before increment} a++ this time use a as it is from the next calling of a use a=a+1
cout<<"increment operator: ++a="<<++a<<endl; // {increment then use} ++a from nowonwards this calling of a us a=a+1
cout<<"decreement operator: b--="<<b--<<endl;// {use before decrement} b-- this time use a as it is from the next calling of a use b=b-1
cout<<"decreement operator: --b="<<--b<<endl;// {decrement then use} --b from nowonwards this calling of a us b=b-1

cout<<endl<<"now looking at comparision operators"<<endl;
// c++ gives [ 0 for false ] and [ 1 for true ]
cout<<"the value of a==b: "<<(a==b)<<endl;
cout<<"the value of a!=b: "<<(a!=b)<<endl;
cout<<"the value of a<=b: "<<(a<=b)<<endl;
cout<<"the value of a>=b: "<<(a>=b)<<endl;
cout<<"the value of a>b: "<<(a>b)<<endl;
cout<<"the value of a<b: "<<(a<b)<<endl;

/*
Logical operators in c++
Logical and && , gives true (output 1) when all conditions are true
Logical or || , gives true (output 1) when atleast one condition is true
Logical not ! , gives true (output 1) when the condition is false =(0)
*/
cout<<"\nFollowing are the logical operators in c++"<<endl;
cout<<"logical and ((a==b)&&(a>=b))"<<((a==b)&&(a>=b))<<endl;
cout<<"logical or ((a==b)||(a>=b))"<<((a==b)||(a>=b))<<endl;
cout<<"logical not !(a==b)"<<!(a==b)<<endl;


return 0;
}

/*
assignment operators in c++
a=10;
a+=10; => a=a+10;
a-=10; => a=a-10;
a*=10; => a=a*10;
a/=10; => a=a/10;
a%=10; => a=a%10;
*/


