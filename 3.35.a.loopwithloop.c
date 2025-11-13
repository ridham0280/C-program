#include<stdio.h>

int main()
{
    int n, i;

    for(i=1; i<=2; i++)
    {
        for(n=1; n<=3; n++)
        {
            printf("%d %d\n", i, n);
        }
    }
    return 0;
}