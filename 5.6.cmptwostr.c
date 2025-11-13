#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    int i;

    printf("Enter a string : ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter a string : ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    for(i=0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if(str1[i] > str2[i])
        {
            printf("%s is greater than %s.", str1, str2);
            return 0;
        }
        else if(str1[i] < str2[i])
        {
            printf("%s is smaller than %s.", str1, str2);
            return 0;
        }
    }

    if(str1[i] == str2[i])
    {
        printf("Both string sre same.");
    }
    else if(str1[i] == '\0')
    {
        printf("%s is smaller than %s.", str1, str2);
    }
    else
    {
        printf("%s is greater than %s.", str1, str2);
    }
    return 0;
}



// Another way to solve

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[100], str2[100];
//     int result;

//     printf("Enter first string : ");
//     fgets(str1, sizeof(str1), stdin);

//     printf("Enter second string : ");
//     fgets(str2, sizeof(str2), stdin);

//     // Remove newline characters
//     str1[strcspn(str1, "\n")] = '\0';
//     str2[strcspn(str2, "\n")] = '\0';

//     // Compare using strcmp
//     result = strcmp(str1, str2);

//     if(result == 0)
//         printf("Both strings are same.\n");
//     else if(result > 0)
//         printf("%s is greater than %s.\n", str1, str2);
//     else
//         printf("%s is smaller than %s.\n", str1, str2);

//     return 0;
// }
