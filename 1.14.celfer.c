//F = (9/5 * C) + 32

#include<stdio.h>

int main()
{
    float cel , fer;

    printf("Enter celcius : ");
    scanf("%f", &cel);

    fer = ( 1.8 * cel) + 32 ;

    printf("Fahrenheit : %f", fer);

    return 0;
}