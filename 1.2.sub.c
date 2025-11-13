#include<stdio.h>
int main()
{
    int num1, num2, sub;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    sub = num1 - num2;

    printf("The subtraction is : %d", sub);
    return 0;
}