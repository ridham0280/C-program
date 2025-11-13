#include<stdio.h>
#include<string.h>

struct student_data
{
    int roll_no;
    char name[100];
    float first_sub;
    float second_sub;
    float third_sub;
    float total;
};

int main()
{
    struct student_data s1;

    printf("Enter roll no. : ");
    scanf("%d", &s1.roll_no);
    getchar();

    printf("Enter name : ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = 0;

    printf("Enter first subject marks : ");
    scanf("%f", &s1.first_sub);

    printf("Enter second subject marks : ");
    scanf("%f", &s1.second_sub);

    printf("Enter third subject marks : ");
    scanf("%f", &s1.third_sub);

    s1.total = s1.first_sub + s1.second_sub + s1.third_sub;

    printf("\n---Student information---\n");
    printf("1. Name : %s\n", s1.name);
    printf("2. Roll no. : %d\n", s1.roll_no);
    printf("3. First subject marks : %.2f\n", s1.first_sub);
    printf("4. Second subject marks : %.2f\n", s1.second_sub);
    printf("5. Third subject marks : %.2f\n", s1.third_sub);
    printf("6. Total marks : %.2f", s1.total);
    return 0;
}