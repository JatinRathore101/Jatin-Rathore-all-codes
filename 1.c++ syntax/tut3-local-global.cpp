#include<iostream> // .h not included after iostream
using namespace std;

int a=10;  // global variable initialized as integer.

int sum()
{
return a;  //after calling function sum the compiler comes here and now searches for the a here it returns global a.
}

int main()
{
int a=5; // local a initialized
a+=2;  //for executing this expression the compiler uses local a above global a
bool is_true=true; // boolean true=1 and false=0
char b='+'; // only and only one character can be placed in ' '
cout<<"value of local a is: "<<a<<"\nValue of global a is: "<<sum(); //in these cout expressions we call the sum function
cout<<"\nsum of local a and global a is:"<<a<<b<<sum()<<"="<<a+sum();
cout<<"\nthis is true:"<<is_true; //is_true is initialized with true value which compiler automatically converts to 1
cout<<"\n global a can also be called by ::a = "<<::a;
return 0;
}
