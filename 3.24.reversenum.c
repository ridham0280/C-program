#include<stdio.h>

int main()
{
    int num, digit;

    printf("Enter number : ");
    scanf("%d", &num);

    printf("Reverse number is : ");

    while(num>0)
    {
        digit = num % 10;
        printf("%d", digit);
        num = num / 10;
    }
    return 0;
}