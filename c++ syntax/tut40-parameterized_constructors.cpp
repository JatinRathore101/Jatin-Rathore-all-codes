#include<iostream>
using namespace std;

/*
Parameterized constructors

*/
static int n=0;

class coordinate
{
    int x;
    int y;
public:
    coordinate() // Default constructor // If we will not include this constructor then declaration of P2 will give error
    {// If we will not include this constructor then declaration of P2 will give error
        x=y=0;
    }// But if we remove both constructors and also remove argument in P1 declaration code will not give error and display garbage values for P1 and P2
    coordinate(int a,int b) // Parameterized constructor // constructor has no return type
    {
        x=a;
        y=b;
    }
    void getdata(); // member function has void return type
};


void coordinate ::getdata()
{
    cout<<"\nThe coordinates of object number "<<n<<" are ("<<x<<","<<y<<")";
}

int main()
{
    coordinate P1(2,7); // Implicit call to the constructor
    P1.getdata();
    coordinate P2;
    P2.getdata();
    coordinate P3=coordinate(3,-8); // Explicit call to the constructor
    P3.getdata();
    cout<<"\n\n";
    return 0;
}
