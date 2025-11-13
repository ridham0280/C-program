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
        str[i] = tolower((unsigned char)str[i]);
    }

    printf("Lowercase string : %s\n", str);
    return 0;
}