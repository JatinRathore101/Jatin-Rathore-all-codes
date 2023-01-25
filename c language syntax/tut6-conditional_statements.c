#include<stdio.h>
/*
if else and switch statements

switch() syntax
//
switch(a+b)
{
case 2:    // if a+b=2 this will execute // ....... ; break;

case 4:    // if a+b=4 this will execute // ....... ; break;

.....
......
......
case 10:    // if a+b=10 this will execute // ....... ; break;


default:     default statement;

}
//

*/

void switchfunc(int x)
{
    switch (x)
    {
        case 1:printf("case 1\n");break;
        case 2:printf("case 2\n");break;
        case 3:printf("case 3\n");
        case 4:printf("case 4\n");
        case 5:printf("case 5\n");
        case 6:printf("case 6\n");break;
        case 7:printf("case 7\n");
        case 8:printf("case 8\n");break;
        case 9:printf("case 9\n");break;
        case 10:printf("case 10\n");
        case 11:printf("case 11\n");
        default :printf("default case");break;
    }
}

int main()
{
    int x;
    //scanf("%d",&x);
    x=2;
    switchfunc(x);
    printf("\n\n");
    x=10;
    switchfunc(x);
    printf("\n\n");
    x=3;
    switchfunc(x);
    printf("\n\n");
    x=7;
    switchfunc(x);
    printf("\n\n");
    x=11;
    switchfunc(x);
    printf("\n\n");
    x=16;
    switchfunc(x);
    printf("\n\n\n\n");

    // if else // if -> else if -> else if -> else etc works same like in c++

    return 0;
}

