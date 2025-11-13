#include<stdio.h>
#include<string.h>

struct cricketer
{
    char name[100];
    int age;
    int test_match;
    float average;
};

int main()
{
    struct cricketer player[10];

    int n;
    printf("How many cricketers do you want to enter (maximum 10): ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        getchar();
        printf("\nCricketer [%d] \n", i+1);
        printf("Enter name : ");
        fgets(player[i].name, sizeof(player[i].name), stdin);
        player[i].name[strcspn(player[i].name, "\n")] = 0;

        printf("Enter age : ");
        scanf("%d", &player[i].age);

        printf("Enter number of test matches that he played : ");
        scanf("%d", &player[i].test_match);

        printf("Enter average runs : ");
        scanf("%f", &player[i].average);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(player[i].average > player[j].average)
            {
                struct cricketer temp = player[i];
                player[i] = player[j];
                player[j] = temp;
            }
        }
    }

    printf("\n--- Cricketers arranged in ascending order of average runs ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nCricketer %d:\n", i + 1);
        printf("Name: %s\n", player[i].name);
        printf("Age: %d\n", player[i].age);
        printf("Test Matches: %d\n", player[i].test_match);
        printf("Average Runs: %.2f\n", player[i].average);
    }
    return 0;
}