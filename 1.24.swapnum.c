#include<stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    printf(" a = %d, b = %d\n", a , b);

    temp = a;
    a = b;
    b = temp;

    printf(" a = %d, b = %d", a, b);

    return 0;
}