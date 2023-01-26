#include<iostream>
using namespace std;

/*
Parameterized constructor
*/

static int n=0;

class coordinate
{
    int x;
    int y;
    int z;
public:

  /*
    coordinate(int a,int b=-2,int c=3) // constructor with 2 default arguments //
    {
        x=a;y=b;z=c;
        cout<<"\n\n";
    }
    shows error: 'coordinate::coordinate(int, int, int)' cannot be overloaded with 'coordinate::coordinate(int, int, int)'|
    */


    /*
    coordinate(int a=1,int b=-2,int c=3) // constructor with all arguments default is actually {default + parameterized} constructor //
    {
        x=a;y=b;z=c;
        cout<<"\n\n";
    }
    */

    coordinate() // Default constructor
    {
        x=0;y=0;z=7;
        cout<<"\n\n";
    }

    coordinate(int a,int b=-2,int c=3)
    {
        x=a;y=b;z=c;
        cout<<"\n\n";
    }


    void getdata(); // member function has void return type
};


void coordinate ::getdata()
{
    n++;
    cout<<"\nThe coordinates of object number "<<n<<" are ("<<x<<","<<y<<","<<z<<")";
}


int main()
{
    coordinate P1; // Implicit call to the constructor
    P1.getdata();
    coordinate P2(11);
    P2.getdata();
    coordinate P3(11,12);
    P3.getdata();
    coordinate P4(11,12,13);
    P4.getdata();
    cout<<"\n\n";
    return 0;
}


