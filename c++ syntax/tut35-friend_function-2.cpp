#include<iostream>
using namespace std;

// member function of one class friend of other

class Complex;

class calculator
{
public:

    int sumcomp(Complex,Complex);
    void adddata(Complex,Complex);
};


class Complex
{
    int R;
    int I;

public:

    friend void calculator ::adddata(Complex,Complex);
    friend int calculator ::sumcomp(Complex,Complex);

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


int calculator ::sumcomp(Complex a,Complex b)
{
    return a.I+b.I;
}
void calculator ::adddata(Complex a,Complex b)
{
    cout<<"The sum of complex numbers is "<<a.R+b.R<<"+i"<<sumcomp(a,b);
}



int main()
{
    Complex c1,c2;
    c1.setdata();
    c1.getdata();
    c2.setdata();
    c2.getdata();
    calculator c;
    c.adddata(c1,c2);

    return 0;
}
