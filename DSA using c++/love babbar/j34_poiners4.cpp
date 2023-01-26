#include<bits/stdc++.h>
using namespace std;

// pointers to character arrays

int main()
{
    string s="abc de";

    int a[5]={1,2,3};
    char b[10]="xy v z w";

    cout<<"s = "<<s<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"while performing cout for character array or string the whole array or string is printed instead of ddress of first \ncharacter"<<endl<<endl;

    char* c=&b[0];//,
    char* d=&b[2];
    char* e=&s[0];
    char* f=&s[2];
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"e = "<<e<<endl;
    cout<<"f = "<<f<<endl;
    cout<<"cout is completely implemented differently for character arrays and strings => it does not prints address stored in \npointer of character array or string"<<endl;
    cout<<endl<<"*c = "<<*c<<endl;
    cout<<"*d = "<<*d<<endl;
    cout<<"*e = "<<*e<<endl;
    cout<<"*f = "<<*f<<endl<<endl;
    cout<<"&c = "<<&c<<endl;
    cout<<"&d = "<<&d<<endl;
    cout<<"&e = "<<&e<<endl;
    cout<<"&f = "<<&f<<endl<<endl;
    cout<<"*(&c) = "<<*(&c)<<endl;
    cout<<"*(&d) = "<<*(&d)<<endl;
    cout<<"*(&e) = "<<*(&e)<<endl;
    cout<<"*(&f) = "<<*(&f)<<endl<<endl;

    char g[20]="nj i ea\0cn";
    string h="cw hji\0h vg";
    cout<<"g = "<<g<<endl;
    cout<<"h = "<<h<<endl;
    cout<<"for both string and character arrays cout breaks printing if  '\0'  ie.. null character is found"<<endl<<endl;
    cout<<"for both string and character arrays cout breaks printing if  forward_slash_zero    ie.. null character is found"<<endl<<endl;

    char i='X';
    char* j=&i;
    cout<<"i = "<<i<<endl;
    cout<<"*j = "<<*j<<endl;
    cout<<"&j = "<<&j<<endl;
    cout<<"cout keeps going to next memory address adjecent to pointer j and keeps printing some garbage that it finds till \nit encounters a null character"<<endl<<endl;

    //char* k="lkjvh gkkol"; // extremely risky process // => k points to a temporary memory holding the string
    //cout<<"k = "<<k<<endl;

    return 0;
}

