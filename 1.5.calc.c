#include<stdio.h>
int main()
{
    float a,b,sum,sub,mul,div;

    printf("Enter first number : ");
    scanf("%f", &a);

    printf("Enter second number : ");
    scanf("%f", &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    printf("Sum = %f\n", sum);
    printf("Sub = %f\n", sub);
    printf("Mul = %f\n", mul);
    printf("Div = %f\n", div);
    getchar();
    return 0;
}