#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], temp, st[100];
    int start, end;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    strcpy(st, str);

    start = 0;
    end = strlen(str) - 1;

    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    if(strcmp(st, str) == 0)
    {
        printf("Given string %s is polindrome string.", st);
    }
    else
    {
        printf("Given string %s is not polindrome string.", st);
    }
    return 0;
}