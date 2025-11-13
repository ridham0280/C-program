#include<stdio.h>

int main()
{
    int i, j, k;

    for(i=1, j=5; i<=3; i++, j--)
    {
        for(k=1; k<=2; k++)
        {
            printf("%d %d\n", i , j);
        }
    }
    return 0;
}