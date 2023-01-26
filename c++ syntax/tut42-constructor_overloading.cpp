#include<iostream>
using namespace std;

/*
constructor overloading
*/

static int n=0;

class coordinate
{
    int x;
    int y;
public:
    coordinate() // constructor 1 //
    {
        x=3;y=-8;
        cout<<"\n\nConstructor 1";
    }
    coordinate(int a,int b) // constructor 2 //
    {
        x=a;
        y=b;
        cout<<"\n\nConstructor 2";
    }
    coordinate(int a) // constructor 3 //
    {
        x=a;
        y=11;
        cout<<"\n\nConstructor 3";
    }
    coordinate(float a) // constructor 4 //
    {
        x=a;
        y=a;
        cout<<"\n\nConstructor 4";
        cout<<"\nSince coordinate member x and member y are int, Though we pass float to the constructor , x,y only store int ";
    }
    void getdata(); // member function has void return type
};


void coordinate ::getdata()
{
    n++;
    cout<<"\nThe coordinates of object number "<<n<<" are ("<<x<<","<<y<<")";
}


int main()
{
    coordinate P1(2,7); // Implicit call to the constructor
    P1.getdata();
    coordinate P2;
    P2.getdata();
    coordinate P3(14.212f);
    P3.getdata();
    coordinate P4(-7);
    P4.getdata();
    cout<<"\n\n";
    return 0;
}


