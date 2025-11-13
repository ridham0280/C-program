#include<stdio.h>

int main()
{
    int n, count, digit;

    printf("Enter number : ");
    scanf("%d", &n);

    count = 0;

    if(n==0)
    {
        count = 1;
    }
    else if(n<0)
    {
        n = -n;
        while(n>0)
        {
            digit = n % 10;
            count++;
            n /= 10;
        }
    }
    else
        {
        while(n>0)
        {
            digit = n % 10;
            count++;
            n /= 10;
        }
    }
    printf("%d\n", count);
    return 0;
}