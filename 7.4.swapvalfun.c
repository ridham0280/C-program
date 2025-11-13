#include<stdio.h>

void swapvalue(int a, int b);

int main()
{
    int a, b;

    printf("Enter first number : ");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    printf("Before swapping : a = %d, b = %d\n", a, b);

    swapvalue(a, b);

    printf("After swapping (in main) : a = %d, b = %d", a, b);

    return 0;
}

void swapvalue(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping (inside function): a = %d, b = %d\n", a, b);
}