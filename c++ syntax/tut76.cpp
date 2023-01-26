#include<iostream>
using namespace std;

// Writing function outside the template class

template<class T1=double,class T2=string>
class myclass
{
    T1 x;
public:
    T2 y;
    myclass(T1 a,T2 b)
    {
        x=a;y=b;
    }
    void disp();
};


template<class T1,class T2> // here we can't write default argument of T1 and T2 // shows error: default argument for template parameter for class enclosing 'void myclass<T1, T2>::disp()'|
void myclass<T1,T2>::disp()
{
    cout<<"\nx = "<<x<<"\ny = "<<y<<"\n";
}


int main()
{
    myclass<float,int> A(4,70.77102);
    A.disp();

    return 0;
}
