#include<iostream>
using namespace std;
// Type casting --> specifying the type
int main()
{//by default the decimal values are taken as double type not as float type unless specified
 //size of float is 4, double is 8 and long double is 12 in 64-bit PC.
    cout<<sizeof(3.64)<<endl; // will be taken as double
    cout<<sizeof(3.64f)<<endl; // we have liberty to use f,F for float and l,L for long double
    cout<<sizeof(3.64F)<<endl;
    cout<<sizeof(3.64l)<<endl;
    cout<<sizeof(3.64L)<<endl;

    // Now showing type casting
    // (int)a or int(a) both correct syntax to convert a to an integer
    // (float)a or float(a) both correct syntax to convert a to an float similarly others work
    // but but be remember typecasting does not modifies value of orignal variable unless assigned casted value.

    int a=10;
    float b=10.71,c=40.444;
    cout<<endl<<(a==(int(b)))<<endl; //will give 1
    int d=int(c);
    cout<<d<<"   "<<(int)c<<"   "<<c<<endl;
    c= (int)c; //now c is no more a float it is orignally modified to int
    cout<<c;

    return 0;

}
