#include<stdio.h>
int main()
{
    float a, b;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    if(a>b)
    {
        printf("%f is larger than %f\n", a, b);
    }
    else if(a<b)
    {
        printf("%f is larger than %f\n", b, a);
    }
    else
    {
        printf("Both are equals.\n");
    }
    return 0;
}