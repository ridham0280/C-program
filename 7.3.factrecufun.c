#include<stdio.h>

int factorial(int a);

int main()
{
    int a;

    printf("Enter a number : ");
    scanf("%d", &a);

    printf("Factorial of %d : %d\n", a, factorial(a));

    return 0;
}

int factorial(int a)
{
    if(a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a-1);
    }
}