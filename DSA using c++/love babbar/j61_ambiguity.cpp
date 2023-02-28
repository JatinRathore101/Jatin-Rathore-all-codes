#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    disp(){cout<<"I am class A"<<endl;}
    disp2(){cout<<"I am from A"<<endl;}
};

class B
{
public:
    disp(){cout<<"I am class B"<<endl;}
    disp2(){cout<<"I am from B"<<endl;}
};

class C:public A, public B
{
public:
    disp(){cout<<"I am class C"<<endl;}
};

int main()
{
    C ob;
    ob.disp();
    ob.C::disp();
    ob.A::disp();
    ob.B::disp();

    //ob.disp2(); // ambiguous // gives error
    ob.A::disp2();
    ob.B::disp2();

    return 0;
}

