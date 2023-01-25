#include<stdio.h>

int main()
{
    int a=10;
    float b=12.7112;

    printf("a = %d",a);
    // printf("Integral value of b = %d",b); // doesn't works
    printf("\nb = %f",b);
    printf("\nsizeof(int) = %lu",sizeof(int));
    printf("\nsizeof(float) = %d",sizeof(float));
    printf("\nsizeof(double) = %lu",sizeof(double));

    return 0;
}
