#include<stdio.h>

int main()
{
    int num, i, pr, sum;

    sum = 0;
    for(num=2; num<=500; num++)
    {
        pr = 1;
        
        for(i=2; i<=num/2; i++)
        {
            if(num%i==0)
            {
                pr = 0;
                break;
            }
        }

        if(pr)
        {
            sum = sum + num;
        }
    }

    printf("%d", sum);
    return 0;
}