#include<iostream>
using namespace std;

/* For operator precedence and associativity visit
   https://en.cppreference.com/w/cpp/language/operator_precedence   */

int main()
{
    int a=3,b=7;
    int c=a*5+b-45+87;
    /* by precedence rule (multiply > addition and substraction)
       but (Addition = substraction) hence associavity left to right
       a*5+b-45+87 = ((((a*5)+b)-45)+87)
       Associativity decides order when precedence is same*/


       cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c;

return 0;
}
