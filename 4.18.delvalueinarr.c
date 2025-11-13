#include<stdio.h>

int main()
{
    int arr[5], newarr[5];
    int i, val, n, newsize;

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

    printf("Enter a value to delete in array : ");
    scanf("%d", &val);

    newsize = 0;
    for(i=0; i<n; i++)
    {
        if(arr[i] != val)
        {
            newarr[newsize] = arr[i];
            newsize++;
        }
    }

    printf("New array is : ");
    for(i=0; i<newsize; i++)
    {
        printf("%d, ", newarr[i]);
    }
    printf("\n");
    return 0;
}