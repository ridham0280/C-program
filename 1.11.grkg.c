#include<stdio.h>

int main()
{
    float a, b;

    printf("Enter grams : ");
    scanf("%f", &a);

    b = a / 1000;

    printf("Kgs : %f", b);
}