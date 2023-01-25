#include<stdio.h>

int main()
{
    // completely same syntax as that in c++
    for(int i=0;i<10;i++){printf("%d\t",i);}printf("\n");
    int i=0; do{printf("%d\t",i);i++;}while(i<10);printf("\n");
    i=0; while(i<10){printf("%d\t",i);i++;}printf("\n");

    // infinite loops
    //for(;;){printf("#");}
    //while(1){printf("#");}

    /*//infinite loop using goto statement
    y:
    goto x;
    x:
        printf("#");
    goto y;
    */

    //break and continue statement
    printf("\n\n");
    for(int i=0;i<100;i++)
    {
        if(i%7==0){continue;}

        if(i%3==0){printf("%d\t",i);}

        if(i==67){break;}
    }

    return 0;
}

