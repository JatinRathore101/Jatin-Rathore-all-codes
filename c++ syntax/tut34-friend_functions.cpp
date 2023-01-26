#include<iostream>
using namespace std;

// declaring functions as friend functions in a class

class Complex
{
    int R;
    int I;
    // Below line means that adddata() is allowed to access the private members of class
    friend void adddata(Complex a,Complex b);

public:

    void setdata()
    {
        cout<<"\nEnter real part of complex number ";
        cin>>R;
        cout<<"\nEnter imaginary part of complex number ";
        cin>>I;
    }

    void getdata()
    {
        cout<<"\nThe complex number is "<<R<<"+i"<<I<<"\n\n";
    }
};

void adddata(Complex a,Complex b)
{
    cout<<"The sum of complex numbers is "<<a.R+b.R<<"+i"<<a.I+b.I;
}

int main()
{
    Complex c1,c2;
    c1.setdata();
    c1.getdata();
    c2.setdata();
    c2.getdata();
    adddata(c1,c2);
    return 0;
}

/*properties of freind functions

1. not in the scope of class, hence cannot be
called using the object of the class
c1.adddata(); is invalid

2. but usually contains objects as arguments.

3. can be declared  anywhere in class, either
in private or public section, doesent matters.

4.Friend function can't access data members
by just their names and needs object(passed in
arguments) to access data members.

*/

