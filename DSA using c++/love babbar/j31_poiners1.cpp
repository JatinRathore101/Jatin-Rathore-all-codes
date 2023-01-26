#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=5;
 // int* b; // declared but uninitialized pointers // bad practice
    int*b=0; // allowed // segmentation fault => null pointer
    b=&a;cout<<"*b ="<<*b<<endl;
    int* c=&a;

    cout<<"a = "<<a<<endl;
    cout<<"*c = "<<*c<<endl;
    a++;
    cout<<"a = "<<a<<endl;
    cout<<"*c = "<<*c<<endl;
    (*c)++;
    cout<<"a = "<<a<<endl;
    cout<<"*c = "<<*c<<endl;
    (*c)++;
    cout<<"a = "<<a<<endl;
    cout<<"*c = "<<*c<<endl;
    /*
    *c++; // this will move pointer c instead of increment as post increment has higher precedence then value at operator // => use brackets
    cout<<"a = "<<a<<endl;
    cout<<"*c = "<<*c<<endl;
    */

    // copying a pointer
    int* d=c;

    cout<<endl<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"*c = "<<*c<<endl;
    cout<<"*d = "<<*d<<endl;
    d++;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<"  Now after d++ its points to next possible integer location moving 4 bytes for int forward"<<endl;

    // long long* e=c; // invalid // long long pointer != int pointer
    long long f=5;
    long long* e=&f;
    cout<<endl<<"e = "<<e<<endl;
    e++;
    cout<<"e = "<<e<<"  Now after e++ its points to next possible long long integer location moving 8 bytes for long long forward"<<endl;



    return 0;
}

