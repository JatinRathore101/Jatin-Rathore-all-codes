#include<iostream>
using namespace std;

/* templates in C++
A template is believed to escalate the potential of C++ several
fold by giving it the ability to define data types as parameters
making it useful to reduce repetitions of the same declaration
of classes for different data types.

Templates promote GENERIC programming

templates syntax necessary for using STL


*/

template<class T1=int,class T2=double,class T3=string>
class myclass
{
    T1 x;
    T2 y;
    T3 z;
public:
    myclass(T1 a,T2 b,T3 c)
    {
        x=a;y=b;z=c;
    }
    void disp()
    {
        cout<<"\nx = "<<x<<"\ny = "<<y<<"\nz = "<<z<<"\n";
    }

};



int main()
{
    myclass<int,int,char> A(2,4.22,'#');
    A.disp();

    myclass<int,char> B(2,'@',"Jatin Rathore eats grass"); // default parameters declared right to left, arguments given left to right
    B.disp();
    return 0;
}

