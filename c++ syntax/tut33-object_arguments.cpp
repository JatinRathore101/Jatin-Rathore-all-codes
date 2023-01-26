#include<iostream>
using namespace std;

// Passing object of a class as argument to a function

class Complex
{
    int R;
    int I;
public:
    void getcom()
    {
        cout<<"\nEnter Real part of complex number ";
        cin>>R;
        cout<<"\nEnter Imaginary part of complex number ";
        cin>>I;
        cout<<"\n\nThe number you entered is "<<R<<"+i"<<I<<"\n\n\n";
    }
    Complex addcom(Complex a,Complex b);
    void dispcom()
    {
        cout<<R<<"+i"<<I;
    }
};

Complex Complex ::addcom(Complex a,Complex b)
{
    Complex Csum;
    Csum.R=a.R+b.R;
    Csum.I=a.I+b.I;
    return Csum;
}

int main()
{
    Complex c1,c2,c3;
    c1.getcom();
    c2.getcom();
    c3=c3.addcom(c1,c2);
    cout<<"\n\nThe added resultant complex number is ";
    c3.dispcom();


    return 0;
}

