#include<iostream>
using namespace std;

class Y; // forward declaration of existance of Y, Otherwise line 9 will give error

class X
{
    int a;
    friend int sumdata (X x,Y y);
public:
    void setdata()
    {
        cout<<"\nEnter value ";
        cin>>a;
        cout<<"\n";
    }
};

class Y
{
    int a;
    friend int sumdata (X x,Y y);
public:
    void setdata()
    {
        cout<<"\nEnter value ";
        cin>>a;
        cout<<"\n";
    }
};

int sumdata (X x,Y y)
{
   return x.a+y.a;
}

int main()
{
    X x;
    Y y;
    x.setdata();
    y.setdata();
    cout<<"\n\nSum of data is "<<sumdata(x,y)<<"\n\n";

    return 0;
}

