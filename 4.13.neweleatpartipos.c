#include<stdio.h>

int main()
{
    int arr[5], newarr[6];
    int i, n, j, pos;

    printf("Enter a number of elements : ");
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

    printf("Enter a particular position to add element : ");
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

    printf("Enter an element to add in array : ");
    scanf("%d", &newarr[pos]);

    for(i=pos+1, j=pos; j<n; i++, j++)
    {
        newarr[i] = arr[j];
    }

    printf("New array is : ");
    for(i=0; i<n+1; i++)
    {
        printf("%d, ", newarr[i]);
    }
    printf("\n");
    return 0;
}