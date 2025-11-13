#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int a, e, i, o, u, j;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    a = 0; e = 0; i = 0; o = 0; u = 0;
    for(j=0; str[j] != '\0'; j++)
    {
        if(str[j] == 'a' || str[j] == 'A')
        {
            a++;
        }
        else if(str[j] == 'e' || str[j] == 'E')
        {
            e++;
        }
        else if(str[j] == 'i' || str[j] == 'I')
        {
            i++;
        }
        else if(str[j] == 'o' || str[j] == 'O')
        {
            o++;
        }
        else if(str[j] == 'u' || str[j] == 'U')
        {
            u++;
        }
    }

    printf("Frequency of vowels is :\n");
    printf(" a --> %d\n", a);
    printf(" e --> %d\n", e);
    printf(" i --> %d\n", i);
    printf(" o --> %d\n", o);
    printf(" u --> %d\n", u);

    return 0;
}