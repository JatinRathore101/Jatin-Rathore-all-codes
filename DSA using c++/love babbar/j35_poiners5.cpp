#include<bits/stdc++.h>
using namespace std;

void modify1(int* a)
{
    ++*a;
}

void modify2(int* a)
{
    ++a;
}

void modify3(int* &a)
{
    ++*a;
}

void modify4(int* &a)
{
    ++a;
}

void modify5(int** a)
{
    ++**a;
}

void modify6(int** a)
{
    ++*a;
}

void modify7(int** a)
{
    ++a;
}

void modify8(int** &a)
{
    ++a;
}

void modify9(int*** a)
{
    ++***a;
}

void modify10(int*** a)
{
    ++**a;
}

void modify11(int*** a)
{
    ++*a;
}

void modify12(int*** a)
{
    ++a;
}

void modify13(int*** &a)
{
    ++a;
}

int main()
{
    int x1=5;
    int* y1=&x1;

    cout<<"before modify1 function call"<<endl;
    cout<<"x1 = "<<x1<<"      y1 = "<<y1<<endl;
    modify1(y1);
    cout<<"after modify1 function call"<<endl;
    cout<<"x1 = "<<x1<<"      y1 = "<<y1<<endl<<endl;


    cout<<"before modify2 function call"<<endl;
    cout<<"x1 = "<<x1<<"      y1 = "<<y1<<endl;
    modify2(y1);
    cout<<"after modify2 function call"<<endl;
    cout<<"x1 = "<<x1<<"      y1 = "<<y1<<endl<<endl;


    cout<<"before modify3 function call"<<endl;
    cout<<"x1 = "<<x1<<"      y1 = "<<y1<<endl;
    modify3(y1);
    cout<<"after modify3 function call"<<endl;
    cout<<"x1 = "<<x1<<"      y1 = "<<y1<<endl<<endl;


    cout<<"before modify4 function call"<<endl;
    cout<<"x1 = "<<x1<<"      y1 = "<<y1<<endl;
    modify4(y1);
    cout<<"after modify4 function call"<<endl;
    cout<<"x1 = "<<x1<<"      y1 = "<<y1<<endl<<endl;




    int x2=5;
    int* y2=&x2;
    int** z2=&y2;

    cout<<"before modify5 function call"<<endl;
    cout<<"x2 = "<<x2<<"      y2 = "<<y2<<"      z2 = "<<z2<<endl;
    modify5(z2);
    cout<<"after modify5 function call"<<endl;
    cout<<"x2 = "<<x2<<"      y2 = "<<y2<<"      z2 = "<<z2<<endl<<endl;


    cout<<"before modify6 function call"<<endl;
    cout<<"x2 = "<<x2<<"      y2 = "<<y2<<"      z2 = "<<z2<<endl;
    modify6(z2);
    cout<<"after modify6 function call"<<endl;
    cout<<"x2 = "<<x2<<"      y2 = "<<y2<<"      z2 = "<<z2<<endl<<endl;


    cout<<"before modify7 function call"<<endl;
    cout<<"x2 = "<<x2<<"      y2 = "<<y2<<"      z2 = "<<z2<<endl;
    modify7(z2);
    cout<<"after modify7 function call"<<endl;
    cout<<"x2 = "<<x2<<"      y2 = "<<y2<<"      z2 = "<<z2<<endl<<endl;


    cout<<"before modify8 function call"<<endl;
    cout<<"x2 = "<<x2<<"      y2 = "<<y2<<"      z2 = "<<z2<<endl;
    modify8(z2);
    cout<<"after modify8 function call"<<endl;
    cout<<"x2 = "<<x2<<"      y2 = "<<y2<<"      z2 = "<<z2<<endl<<endl;




    int x3=5;
    int* y3=&x3;
    int** z3=&y3;
    int*** w3=&z3;

    cout<<"before modify9 function call"<<endl;
    cout<<"x3 = "<<x3<<"      y3 = "<<y3<<"      z3 = "<<z3<<"      w3 = "<<w3<<endl;
    modify9(w3);
    cout<<"after modify9 function call"<<endl;
    cout<<"x3 = "<<x3<<"      y3 = "<<y3<<"      z3 = "<<z3<<"      w3 = "<<w3<<endl<<endl;


    cout<<"before modify10 function call"<<endl;
    cout<<"x3 = "<<x3<<"      y3 = "<<y3<<"      z3 = "<<z3<<"      w3 = "<<w3<<endl;
    modify10(w3);
    cout<<"after modify10 function call"<<endl;
    cout<<"x3 = "<<x3<<"      y3 = "<<y3<<"      z3 = "<<z3<<"      w3 = "<<w3<<endl<<endl;


    cout<<"before modify11 function call"<<endl;
    cout<<"x3 = "<<x3<<"      y3 = "<<y3<<"      z3 = "<<z3<<"      w3 = "<<w3<<endl;
    modify11(w3);
    cout<<"after modify11 function call"<<endl;
    cout<<"x3 = "<<x3<<"      y3 = "<<y3<<"      z3 = "<<z3<<"      w3 = "<<w3<<endl<<endl;


    cout<<"before modify12 function call"<<endl;
    cout<<"x3 = "<<x3<<"      y3 = "<<y3<<"      z3 = "<<z3<<"      w3 = "<<w3<<endl;
    modify12(w3);
    cout<<"after modify12 function call"<<endl;
    cout<<"x3 = "<<x3<<"      y3 = "<<y3<<"      z3 = "<<z3<<"      w3 = "<<w3<<endl<<endl;


    cout<<"before modify13 function call"<<endl;
    cout<<"x3 = "<<x3<<"      y3 = "<<y3<<"      z3 = "<<z3<<"      w3 = "<<w3<<endl;
    modify13(w3);
    cout<<"after modify13 function call"<<endl;
    cout<<"x3 = "<<x3<<"      y3 = "<<y3<<"      z3 = "<<z3<<"      w3 = "<<w3<<endl<<endl;

    return 0;
}

