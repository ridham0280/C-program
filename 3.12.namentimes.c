#include<stdio.h>

int main()
{
    char name[50];
    int n, i;

    printf("numbers to print: ");
    scanf("%d", &n);

    printf("Enter your name: ");
    scanf("%s", name);

    i = 1;
    while(i<=n)
    {
        printf("%s\n", name);
        i++;
    }
    return 0;
}