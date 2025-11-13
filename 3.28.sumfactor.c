#include<stdio.h>

int main()
{
    int num, i, sum;

    printf("Enter number : ");
    scanf("%d", &num);

    sum = 0;
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            sum = sum + i;
        }
    }

    if((sum-num)==num)
    {
        printf("Given number %d is a perfect number.\n", num);
    }
    else
    {
        printf("Given number %d is not a perfect number.\n", num);
    }
    return 0;
}