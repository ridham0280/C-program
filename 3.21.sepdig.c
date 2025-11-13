#include<stdio.h>

int main()
{
    int digits, num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("Digits : ");
    while(num > 0)
    {
        digits = num % 10;
        printf("%d,", digits);
        num = num / 10;
    }
    printf("\n");
    return 0;
}