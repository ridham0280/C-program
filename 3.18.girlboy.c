#include<stdio.h>

int main()
{
    int i, boys, girls;
    char sex;

    girls = 0;
    boys = 0;

    printf("Enter G/g for girls and B/b for boys: \n");
    for(i=1; i<=50; i++)
    {
        printf("Student %d: ", i);
        scanf(" %c", &sex);

        if( sex == 'G' || sex == 'g')
        {
            girls++;
        }
        else if( sex == 'B' || sex == 'b')
        {
            boys++;
        }
        else
        {
            printf("Invalid input. Try again.\n");
            i--;
        }
    }

    printf("Boys : %d\n", boys);
    printf("Girls : %d\n", girls);

    return 0;
}