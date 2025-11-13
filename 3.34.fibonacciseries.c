#include<stdio.h>

int main()
{
    int n, a, b, c, i;

    printf("give the length of fibonacci series : ");
    scanf("%d", &n);

    printf("fibonacci series : ");

    i = 1;
    a = 0;
    b = 1;
    while(i<=n)
    {
        printf("%d,", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    printf("\n");
    return 0;
}