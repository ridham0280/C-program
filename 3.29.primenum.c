#include<stdio.h>

int main()
{
    int num, i, pr;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num<=1)
    {
        printf("Given number %d is not a prime number.\n", num);
        return 0;
    }

    pr = 0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            pr++;
        }
    }  
    
    if(pr == 0)
    {
        printf("Given number %d is a prime number.\n", num);
    }
    else
    {
            printf("Given number %d is not a prime number.\n", num);
    }
    return 0;
}