#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int roll_no;
    char name[50];
    char course[50];
    char major_sub[50];
    char minor_sub[50];
};

void printallnames(struct student std[], int n);
void printdatabyroll(struct student std[], int n, int roll);

int main()
{
    struct student std[10];
    for (int i = 0; i < 10; i++)
    {
        printf("\nStudent %d.\n", i + 1);
        printf("Student name : ");
        fgets(std[i].name, sizeof(std[i].name), stdin);
        std[i].name[strcspn(std[i].name, "\n")] = 0;
        printf("Roll no. : ");
        scanf("%d", &std[i].roll_no);
        getchar();
        printf("Course name : ");
        fgets(std[i].course, sizeof(std[i].course), stdin);
        std[i].course[strcspn(std[i].course, "\n")] = 0;
        printf("Major subjects : ");
        fgets(std[i].major_sub, sizeof(std[i].major_sub), stdin);
        std[i].major_sub[strcspn(std[i].major_sub, "\n")] = 0;
        printf("Minor subjects : ");
        fgets(std[i].minor_sub, sizeof(std[i].minor_sub), stdin);
        std[i].minor_sub[strcspn(std[i].minor_sub, "\n")] = 0;
    }

    printallnames(std, 10);

    while(1)
    {
        char input[10];
        printf("\nEnter roll no. to see data or 'q' to quit: ");
        fgets(input, sizeof(input), stdin);

        if(input[0] == 'q' || input[0] == 'Q')
            break;
        
        int n = atoi(input);
        printdatabyroll(std, 10, n);
    }
    return 0;
}

void printallnames(struct student std[], int n)
{
    printf("\nList of all students:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, std[i].name);
    }
}

void printdatabyroll(struct student std[], int n, int roll)
{
    int found = 0;
    for(int i = 0; i < n; i++)
    {
        if(std[i].roll_no == roll)
        {
            found = 1;
            printf("---Student Details ---\n");
            printf("Name: %s\n", std[i].name);
            printf("Roll No: %d\n", std[i].roll_no);
            printf("Course: %s\n", std[i].course);
            printf("Major Subject: %s\n", std[i].major_sub);
            printf("Minor Subject: %s\n", std[i].minor_sub);
            break;
        }
    }

    if(!found)
        printf("No student found with roll number %d\n", roll);
}