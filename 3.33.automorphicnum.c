#include<stdio.h>

int main()
{
    int num, square, temp, digits, lastdigit, divisor, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;
    digits = 0;

    while(temp>0)
    {
        digits++;
        temp = temp / 10;
    }

    divisor = 1;
    for(i=0; i<digits; i++)
    {
        divisor = divisor * 10;
    }

    lastdigit = square % divisor;

    if(lastdigit == num)
    {
        printf("Given number %d is an automorphic number.\n", num);
    }
    else
    {
        printf("Given number %d is not an automorphic number.\n", num);
    }
    return 0;
}