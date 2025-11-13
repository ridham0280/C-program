#include<stdio.h>

void maxminarr(int arr[], int size, int *max, int *min);

int main()
{
    int arr[100], size, i, max, min;

    printf("Enter number of elements : ");
    scanf("%d", &size);

    for(i=0; i<size; i++)
    {
        printf("Enter a number [%d] : ", i);
        scanf("%d", &arr[i]);
    }

    maxminarr(arr, size, &max, &min);

    printf("Minimum value : %d\n", min);
    printf("Maximum value : %d\n", max);

    return 0;
}

void maxminarr(int arr[], int size, int *max, int *min)
{
    *max = *min = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}