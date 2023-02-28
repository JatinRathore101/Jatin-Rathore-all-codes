#include<bits/stdc++.h>
using namespace std;

class c1
{
    int x;
    char z;
};

class c2
{
    int x;
};

class c3
{
    char z;
};

class c4
{

};



int main()
{
    c1 o1;c2 o2;c3 o3;c4 o4;
    cout<<"size of object of c1 = "<<sizeof(o1)<<endl;
    cout<<"size of object of c2 = "<<sizeof(o2)<<endl;
    cout<<"size of object of c3 = "<<sizeof(o3)<<endl; // 1 char variable as member => 1 byte
    cout<<"size of object of c4 = "<<sizeof(o4)<<endl; // empty file still 1 byte

    return 0;
}

