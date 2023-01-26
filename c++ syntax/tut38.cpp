#include<iostream>
using namespace std;

// swapping values of private variables of two objects of different classes
class Y;

class X
{
    int a;
public:
    friend void exchange_val(X &x,Y &y);
    void getdata()
    {
        cout<<"\nEnter the value of a ";
        cin>>a;
        cout<<"\n\n";
    }
    void disp()
    {
        cout<<"\na = "<<a;
    }
};

class Y
{
    int b;
    friend void exchange_val(X &x,Y &y);
public:
    void getdata()
    {
        cout<<"\nEnter the value of b ";
        cin>>b;
        cout<<"\n\n";
    }
    void disp()
    {
        cout<<"\nb = "<<b;
    }
};

void exchange_val(X &x,Y &y)
{
    cout<<"\n\nExchanging values\n\n";
    int temp=x.a;
    x.a=y.b;
    y.b=temp;

}

int main()
{
    X x;Y y;
    x.getdata();
    y.getdata();
    x.disp();
    y.disp();
    exchange_val(x,y);
    x.disp();
    y.disp();

    cout<<"\n\n";
    return 0;
}

