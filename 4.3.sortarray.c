#include<stdio.h>

int main()
{
    int arr[5], i, j, temp;

    printf("Enter 5 values : ");

    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<4-i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("In descending order : ");
    for(i=0; i<5; i++)
    {
        printf("%d,", arr[i]);
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<4-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    printf("In ascending order : ");
    for(i=0; i<5; i++)
    {
        printf("%d,", arr[i]);
    }
    return 0;
}