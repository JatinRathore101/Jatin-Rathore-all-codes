#include<stdio.h>

/*
format specifiers and escape sequences



The format specifier in C programming is used for input and
output purposes. Through this, we tell the compiler what type
of variable we are using for input using scanf() or printing
using printf(). Some examples are %d, %c, %f, etc.

Format Specifier        Type
%c                      character
%d                      signed integer
%f                      float
%i                      unsigned integer
%u                      unsigned integer
%l                      long integer
%lf                     double
%lu                     unsigned long integer
%s                      String




escape sequence is a sequence of characters which are used
in formatting the output. They are not displayed on the
screen while printing. Each character has its own specific
function like \t is used to insert a tab and \n is used to
add newline.

Escape Sequence             Description
\t                          tab space
\b                          backspace
\n                          newline
\r                          carriage return
\f                          form feed
\’                          single quote
\”                          double quote
\\                          backslash


*/

int main()
{
    char a1='w'; //  %c  //
    int a2=10; //  %d  //
    float a3=37.32; //  %f  //
    double a4=29.293922343; //  %lf  //
    unsigned long a5=7297392732; //  %lu  //
    unsigned long long a6=83938938398393; //  %llu  //

    printf("char a1 = %c\n",a1);
    printf("int a2 = %d\n",a2);
    printf("float a3 = %f\n",a3);
    printf("double a4 = %lf\n",a4);
    printf("unsigned long a5 = %lu\n",a5);
    printf("unsigned long long a6 = %llu\n",a6);


    return 0;
}

