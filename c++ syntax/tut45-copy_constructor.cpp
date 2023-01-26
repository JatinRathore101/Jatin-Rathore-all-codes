#include <iostream>
using namespace std;

// copy constructor

class Point {
private:
    int x, y;

public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }


    Point(const Point& p1) // Copy constructor
    {
        x = p1.x;
        y = p1.y;
    }

    // What if we remove whole copy constructor from this code

    int getX() { return x; }
    int getY() { return y; }
};

int main()
{

    Point p1(10, 15); // Normal constructor is called here
    cout << "p1.x = " << p1.getX()<< ", p1.y = " << p1.getY()<<"\n\n";

    Point p2(p1); // Copy constructor is called here
    cout<<"\ncopy constructor call syntax 1     Point p2(p1);";
    cout << "\np2.x = " << p2.getX()<< ", p2.y = " << p2.getY()<<"\n\n";

    Point p3 = p1; // Copy constructor is called here
    cout<<"\ncopy constructor call syntax 2     Point p3 = p1;";
    cout << "\np3.x = " << p3.getX()<< ", p3.y = " << p3.getY()<<"\n\n";

    cout<<"What if we remove whole copy constructor from this code? Will invoking copy constructors still work?\n\n";

    return 0;
}
