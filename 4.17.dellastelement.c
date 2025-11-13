#include<stdio.h>

int main()
{
    int arr[5], newarr[5];
    int i, n;

    printf("Enter a number of elements in array : ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter a number [%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array is : ");
    for(i=0; i<n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    for(i=0; i<n-1; i++)
    {
        newarr[i] = arr[i];
    }

    printf("New array is : ");
    for(i=0; i<n-1; i++)
    {
        printf("%d, ", newarr[i]);
    }
    printf("\n");

    return 0;
}