#include<stdio.h>

int main()
{
    int arr1[5], arr2[10];
    int i, j;

    for(i=0; i<5; i++)
    {
        printf("Enter a number [%d] : ", i);
        scanf("%d", &arr1[i]);
    }

    printf("First array is : \n");
    for(i=0; i<5; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    for(i=1; i<10; i=i+2)
    {
        printf("Enter a number [%d] : ", i);
        scanf("%d", &arr2[i]);
    }

    for(i=0, j=0; i<10 && j<5; i=i+2, j++)
    {
        arr2[i] = arr1[j];
    }

    printf("Second array is : \n");
    for(i=0; i<10; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}