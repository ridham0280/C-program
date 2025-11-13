#include<stdio.h>

int main()
{
    int arr[5], newarr[5];
    int i, j, n;

    printf("Enter a number of element : ");
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

    for(i=0, j=1; j<n; i++, j++)
    {
        newarr[i] = arr[j];
    }

    printf("New array is : ");
    for(i=0; i<n-1; i++)
    {
        printf("%d, ", newarr[i]);
    }
    printf("\n");

    return 0;
}