#include<stdio.h>

int main()
{
    float a, b;

    printf("Enter kgs : ");
    scanf("%f", &a);

    b = a * 1000;

    printf("Grams : %f", b);
}