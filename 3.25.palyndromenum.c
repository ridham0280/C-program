#include<stdio.h>

int main()
{
    int num, digit, rev, temp;

    printf("Enter number : ");
    scanf("%d", &num);

    temp = num;
    rev = 0;
    while(num>0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    
    if(rev == temp)
    {
        printf("Given number %d is palyndrome.\n", temp);
    }
    else
    {
        printf("Given number %d is not palyndrome.\n", temp);
    }
    return 0;
}