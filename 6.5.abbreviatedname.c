#include<stdio.h>
#include<string.h>

int main()
{
    char name[100], word[10][20];
    int i=0, j=0, n, count;

    printf("Enter full name : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for(n=0; name[n] != '\0'; n++)
    {
        if(name[n] != ' ')
        {
            word[i][j++] = name[n];
        }
        else
        {
            word[i][j] = '\0';
            i++;
            j = 0;
        }
    }

    word[i][j] = '\0';
    count = i + 1;

    printf("Abbreviated name : ");
    for(i=0; i<count-1; i++)
    {
        printf("%c.", word[i][0]);
    }
    printf("%s\n", word[count-1]);

    return 0;
}