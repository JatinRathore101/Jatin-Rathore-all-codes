#include<bits/stdc++.h>
using namespace std;
/* The greatest common divisor (GCD) of two or more numbers,
which are not all zero, is the largest positive number that
divides each of the numbers. */

double GCDofDECI(double a,double b)
{
    long long A=a*10000000,B=b*10000000;

    long long temp=max(A,B);
    B=min(A,B);A=temp;

    while(B>0)
    {
        temp=A%B;
        A=B;
        B=temp;
    }

    double c=(double)A/10000000;

    return c;
}

int main()
{
    double a,b;cin>>a>>b;
    cout<<endl<<GCDofDECI(a,b);
    return 0;
}

