#include<iostream>
using namespace std;

/*
  creating static variables will remain same (common in memory)
  for all objects of that class.

  Static function - It allowed to access only static variables.
  These don't need an object to run, can run with class name only.
*/

class employee
{
    int id;
    static int n; /* remember here we can't initialize
                     static variable, it is just declaration.*/

    /*
       static variable is declared inside class and the
       defined outside class with scope resolution sign,
       its initial value is 0 by default unless if specified.
       This statement is executed only once for rest all
       the static variable defined globally is used.
    */

public:
    void setdata()
    {
        cout<<"\nEnter id of employee ";
        cin>>id;
    }
    void getdata()
    {
        cout<<"\nThe id of the employee "<<n+1<<" is "<<id;
        n++;
    }
    static void getn()
    {
        cout<<"\nThe value of n is "<<n<<"\n\n";
        /* remember n is static variable, hence our static
           function getn can only access it, it can't
           access id, compiler will give error.
           It can be called directly with class name

           Class_name::Static_Member_function();

        */
    }
};




int employee ::n;
// static variable defining and initialization outside class

/*
here we can change the initial value of our static
variable which is by default 0.

int employee ::n=10;

*/





int main()
{
    employee e1,e2,e3,e4; // all object, here e1 e2 e3 e4 will share the static variable n;
    e1.setdata();
    e1.getdata();
    employee::getn();
    e2.setdata();
    e2.getdata();
    employee::getn();
    e3.setdata();
    e3.getdata();
    employee::getn();
    e4.setdata();
    e4.getdata();
    employee::getn();
    cout<<"\n\n";
    return 0;
}

