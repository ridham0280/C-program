#include<stdio.h>

int main()
{
    int arr[10];
    int i;

    printf("Enter 10 values by space : ");

    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("4th value is : %d\n", arr[3]);
    printf("7th value is : %d\n", arr[6]);
    printf("9th value is : %d\n", arr[8]);

    return 0;
}