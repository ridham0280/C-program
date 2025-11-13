#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = a % 7;

    if(b==0)
    {
        printf("%d is divisible by 7.", a);
    }
    else
    {
        printf("%d is not divisible by 7.", a);
    }
    return 0;
}