#include<stdio.h>

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 values by space : ");

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
        printf("Your values : %d\n", arr[i]); 
    }
    return 0;
}