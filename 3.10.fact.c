#include<stdio.h>

int main()
{
    int n, i, fact;

    printf("Enter number: ");
    scanf("%d", &n);

    i = 1;
    fact = 1;
    while(i<=n)
    {
        fact = fact * i;
        i++;
    }
    printf("%d", fact);
    return 0;
}