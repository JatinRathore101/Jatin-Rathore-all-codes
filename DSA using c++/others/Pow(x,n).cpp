#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n)
{
    if(n==0){return 1;}
    else if(n==-2147483648){x*=x;x=1/x;n/=2;n*=-1;}
    else if(n<0){x=1/x;n=-1*n;}

    if(x==0){return 0;}

    if(n%2==0){n/=2;x*=x;return myPow(x,n);}
    else{n-=1;return x*myPow(x,n);}
}

int main()
{
    double x=2;
    int n=-214748368;
    cout<<myPow(x,n);
    return 0;
}

/*
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000

Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100

Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25



Constraints:

    -100.0 < x < 100.0
    -231 <= n <= 231-1
    n is an integer.
    -104 <= xn <= 104


*/

