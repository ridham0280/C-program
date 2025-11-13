#include<stdio.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    int i = 1;
    while(i<=5)
    {
        printf("%s\n", name);
        i++;
    }
    return 0;
}