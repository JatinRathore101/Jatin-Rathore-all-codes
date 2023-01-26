#include<bits/stdc++.h>
using namespace std;
// size of every kind of pointer irrespective to the size and type of data it points is always 8 bytes //

int main()
{
    int a[5]={5,3,6,4,7};
    int* b=a;
    int* c=&a[0];

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl<<endl;
    cout<<"sizeof(a) = "<<sizeof(a)<<endl;
    cout<<"sizeof(b) = "<<sizeof(b)<<endl;
    cout<<"sizeof() works differently with array name pointer"<<endl;
    cout<<"sizeof(c) = "<<sizeof(c)<<endl<<endl<<endl;
    cout<<"*a = "<<*a<<endl;
    cout<<"*b = "<<*b<<endl;
    cout<<"*c = "<<*c<<endl<<endl;
    cout<<"sizeof(*a) = "<<sizeof(*a)<<endl;
    cout<<"sizeof(*b) = "<<sizeof(*b)<<endl;
    cout<<"sizeof(*c) = "<<sizeof(*c)<<endl<<endl<<endl;
    cout<<"&a = "<<&a<<endl;
    cout<<"&b = "<<&b<<endl;
    cout<<"&c = "<<&c<<endl<<endl;
    cout<<"&a != &b != &c"<<endl<<endl;
    cout<<"sizeof(&a) = "<<sizeof(&a)<<endl;
    cout<<"sizeof(&b) = "<<sizeof(&b)<<endl;
    cout<<"sizeof(&c) = "<<sizeof(&c)<<endl<<endl<<endl;

    //cout<<*(++a); // this is not allowed // this array name pointer can't be modified
    cout<<*(++b);
    cout<<*(++c);

    return 0;
}

