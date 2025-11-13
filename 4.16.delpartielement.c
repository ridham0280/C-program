#include<stdio.h>

int main()
{
    int arr[5], newarr[5];
    int i, j, n, pos;

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

    printf("Enter a particular position of element to delete : ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) 
    {
        printf("Invalid position!\n");
        return 0;
    }

    for(i=0; i<pos; i++)
    {
        newarr[i] = arr[i];
    }
    
    for(i=pos; i<n-1; i++)
    {
        newarr[i] = arr[i+1];
    }

    printf("New array is : ");
    for(i=0; i<n-1; i++)
    {
        printf("%d, ", newarr[i]);
    }
    printf("\n");

    return 0;
}