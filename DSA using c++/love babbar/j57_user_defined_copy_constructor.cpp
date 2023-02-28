#include<bits/stdc++.h>
using namespace std;

class river
{
    int width;
    float density;
public:
    // user defined default constructor
    river(){width=100;density=1010;}

    // parameterized constructor
    river(int width,float denSity){this->width=width;density=denSity;}//this keyword helps in ambiguity resolution

    // copy constructor
    river(river& r) // river(river r) // gives error // for copy constructor call by reference (&) is necessary // else it will start an infinite loop => call by value = creating copy //
    {
        this->width=r.width;
        this->density=r.density;
    }

    int getw(){return width;}
    float getd(){return density;}
};

int main()
{
    river r1,r2(120,990);
    river r3(r1),r4=r2;
    river* R5=new river(r1);


    cout<<"r1.getw()  = "<<r1.getw()<<"              r1.getd()  = "<<r1.getd()<<endl;
    cout<<"r2.getw()  = "<<r2.getw()<<"              r2.getd()  = "<<r2.getd()<<endl;
    cout<<"r3.getw()  = "<<r3.getw()<<"              r3.getd()  = "<<r3.getd()<<endl;
    cout<<"r4.getw()  = "<<r4.getw()<<"              r4.getd()  = "<<r4.getd()<<endl;
    cout<<"R5->getw() = "<<R5->getw()<<"              R5->getd() = "<<R5->getd()<<endl;

    return 0;
}

