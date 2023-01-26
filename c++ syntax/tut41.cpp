#include<iostream>
#include<cmath>
using namespace std; 

/*
function for distance between two points taking coordinate objects as arguments.
*/

static int n=0;

class coordinate
{
    friend float distance(coordinate a,coordinate b);
    int x;
    int y;
public:
    coordinate() // Default constructor // If we will not include this constructor then declaration of P2 will give error
    {// If we will not include this constructor then declaration of P2 will give error
        x=3;y=-8;
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
    n++;
    cout<<"\nThe coordinates of object number "<<n<<" are ("<<x<<","<<y<<")";
}

float distance(coordinate a,coordinate b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));

}

int main()
{
    coordinate P1(2,7); // Implicit call to the constructor
    P1.getdata();
    coordinate P2;
    P2.getdata();
    cout<<"\nThe distance between the points is = "<<distance(P1,P2)<<"\n\n";
    return 0;
}
