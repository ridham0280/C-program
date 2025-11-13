#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for(i=0; str[i]; i++)
    {
        str[i] = toupper((unsigned char)str[i]);
    }

    printf("Upper string is : %s", str);

    return 0;
}