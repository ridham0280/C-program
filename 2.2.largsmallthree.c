#include<stdio.h>
int main()
{
    float a, b, c;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("Enter third number: ");
    scanf("%F", &c);

    if(a>b && a>c)
    {
        printf("%f is the largest number.\n", a);
        if(b>c)
        {
            printf("%f is the smallest number.\n", c);
        }
        else if(c>b)
        {
            printf("%f is smallest number.\n", b);
        }
        else
        {
            printf("Enter valid number.\n");
        }
    }

    if(b>a && b>c)
    {
        printf("%f is the largest number.\n", b);
        if(a>c)
        {
            printf("%f is the smallest number.\n", c);
        }
        else if(c>a)
        {
            printf("%f is smallest number.\n", a);
        }
        else
        {
            printf("Enter valid number.\n");
        }
    }

    if(c>a && c>b)
    {
        printf("%f is the largest number.\n", c);
        if(a>b)
        {
            printf("%f is the smallest number.\n", b);
        }
        else if(b>a)
        {
            printf("%f is smallest number.\n", a);
        }
        else
        {
            printf("Enter valid number.\n");
        }
    }
    return 0;
}