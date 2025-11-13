#include<stdio.h>
int main()
{
    int num1, num2, mul;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    mul = num1 * num2;

    printf("The multiplication is : %d", mul);
    return 0;
}