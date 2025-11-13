#include<stdio.h>

int main()
{
    int num, i, count, pr;

    count = 0;
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
            count++;
        }
    }
    printf("%d", count);
    return 0;
}