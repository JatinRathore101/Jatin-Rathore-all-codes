#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter 2 numbers\n");

    scanf("%d",&a);
    /*scanf is used to take inputs from the user.
    Here &a gives the address of variable “a” to
    store the user's given value. %d notifies that
    the value should be of integer type.*/
    scanf("%d",&b);

    printf("\nThe sum is = %d",a+b);

    return 0;
}
