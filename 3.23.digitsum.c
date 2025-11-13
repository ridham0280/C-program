#include<stdio.h>

int main()
{
    int num, digit, sum;

    printf("Enter a number : ");
    scanf("%d", &num);

    sum = 0;
    while(num>0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("%d\n", sum);
    return 0;
}