#include<bits/stdc++.h>
using namespace std;

/*
Nesting in Containers
The key of element of maps,or datatypes of vector or sets etc can be complex also, keys can be in
form of sets, vectors, pairs etc as all of these can be compared.

*/

int main()
{
    pair<int,int> p1,p2,p3,p4,p5,p6;
    p1={1,2};
    p2={2,3};
    p3={1,2};
    p4={1,3};
    p5={0,5};
    p6={2,2};

    cout<<"p1={1,2}\n";
    cout<<"p2={2,3}\n";
    cout<<"p3={1,2}\n";
    cout<<"p4={1,3}\n";
    cout<<"p5={0,5}\n";
    cout<<"p6={2,2}\n";

    cout<<"(p1>p2)  = "<<(p1>p2)<<endl;
    cout<<"(p1>p3)  = "<<(p1>p3)<<endl;
    cout<<"(p1>=p3) = "<<(p1>=p3)<<endl;
    cout<<"(p1>p4)  = "<<(p1>p4)<<endl;
    cout<<"(p1>p5)  = "<<(p1>p5)<<endl;
    cout<<"(p1>p6)  = "<<(p1>p6)<<endl;

    return 0;
}

