#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    int i;

    printf("Enter a string : ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';

    printf("Copied string is : %s", strcpy(str2, str1));
    return 0;
}