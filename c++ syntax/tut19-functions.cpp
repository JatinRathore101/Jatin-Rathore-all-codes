#include<iostream>
using namespace std;
// Functions in C++
/*When we write something after return 0; it is skipped
  or does not run. So if we wish to define our function
  after main() and want it to be executed then we will
  need to declare the function before main() this
  declaration is called as function prototype.
*/

//float sum_num(int a,float b);   Acceptable
//int sum_num(a,float b);         Error not acceptable
//int sum_num(int,float);         Acceptable

float produ(float a,float b) // fully defined function
{
    return a*b;
}

float sum_num(int a,float); // function prototype

/*
  Function need not to return a value.
  We can declare such functions as void.
*/
void gdmg(){cout<<"\n\nGood Morning, I dont return any value.\n\n";}

int main()
{   float x,y;
    cout<<"\nEnter first number ";
    cin>>x;
    cout<<"\nEnter second number ";
    cin>>y;

    cout<<"\nThe sum of numbers is = "<<sum_num(x,y);
    cout<<"\nThe product of numbers is = "<<produ(x,y)<<endl<<endl;
    gdmg();
    return 0;
}

/*
  Formal parameters used only inside functions.
  Here formal parameters a and b take values
  from actual parameters x and y.
*/

float sum_num(int a,float b)
{   cout<<"\nfloat x is taken in int a in sum_num()"<<endl;
    return a+b;
}
