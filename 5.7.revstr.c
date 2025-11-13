#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], temp;
    int start, end;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

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

    printf("Reversed string is : %s", str);
    return 0;
}