#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter a string : ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter a string : ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("Final string is : %s", str1);
    return 0;
}