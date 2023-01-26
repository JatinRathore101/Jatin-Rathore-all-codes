#include<iostream>
using namespace std;

// classes in c++ OOPS
// classes help user define a datatype
// Why do we need class when structure and union serve the same purpose
// well there are few things where structure lacks behind class
// => structure has no data hiding feature private/public etc, class has.
// => structure can't have a function inside it, class can.

class emp
{
    private:
    int a,b;
    public:
    int c,d,e;
    void set_data(int a1,int b1,int c1);
    void get_data()
    {
        cout<<"\nThe value of a = "<<a;
        cout<<"\nThe value of b = "<<b;
        cout<<"\nThe value of c = "<<c;
        cout<<"\nThe value of d = "<<d;
        cout<<"\nThe value of e = "<<e;
    }
}CL1,CL2;

void emp ::set_data(int a1,int b1,int c1)
{
    a=a1;b=b1;c=c1;
}

int main()
{   CL1.set_data(-11.09,12,71.777);
    CL1.d=44;
    CL1.e=57;
    CL1.get_data();       // just    get_data();    will give error.

    return 0;
}
