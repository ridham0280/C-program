#include<stdio.h>

int main()
{
    int n, i, sum ;

    printf("Enter number to print: ");
    scanf("%d", &n);
    
    i = 2;
    sum = 0;
    while(i<=n)
    {
        sum = sum + i;
        i = i + 2;
    }
    printf("%d\n", sum);
    return 0;
}