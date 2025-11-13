#include<stdio.h>

int main()
{
    int n, i;

    for(i=1; i<=3; i++)
    {
        for(n=1; n<=i; n++)
        {
            printf("%d %d\n", i, n);
        }
    }
    return 0;
}