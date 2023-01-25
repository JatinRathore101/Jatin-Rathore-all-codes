#include<stdio.h>

int main()
{
    int a, b;
    a = 2;
    b = 3;

    printf("a + b = %d\n", a+b); // plus
    printf("a - b = %d\n", a-b); // minus
    printf("a * b = %d\n", a*b); // multiply
    printf("a / b = %d\n", a/b); // devide
    printf("a %% b = %d\n", a%b); // modulas // single modulas sign doesn't prints //

    printf("a & b = %d\n", a&b); // bitwise and
    printf("a | b = %d\n", a|b); // bitwise or
    printf("a ^ b = %d\n", a^b); // bitwise xor
    printf("~ b = %d\n", ~b); // bitwise complement // ones complement
    printf("b<<2 = %d\n", b<<2); // bitwise shift left
    printf("b>>1 = %d\n", b>>1); // bitwise shift right

    a=0;b=1;int c=2,d=1;
    printf("a && b = %d\n", a && b);
    printf("c && b = %d\n", c && b);
    printf("a || b = %d\n", a||b);
    printf("c == b = %d\n", c == b);
    printf("c >= b = %d\n", c>=b);
    printf("d == b = %d\n", d==b);

    return 0;
}

