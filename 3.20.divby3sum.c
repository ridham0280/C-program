#include<stdio.h>

int main()
{
    int i, n, sum;

    n = 100;
    sum = 0;
    for(i=1; i<=n; i++)
    {
        if(i%3==0)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}