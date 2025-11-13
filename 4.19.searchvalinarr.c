#include<stdio.h>

int main()
{
    int arr[5];
    int i, n, val, found;

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

    printf("Enter a value to search : ");
    scanf("%d", &val);

    found = 0;
    for(i=0; i<n; i++)
    {
        if(arr[i] == val)
        {
            printf("array [%d] is %d. \n", i, val);
            found++;
        }
    }

    if(found == 0)
    {
        printf("Value not found. ");
    }
    printf("\n");
    return 0;
}