#include<stdio.h>

int main()
{
    int arr[10], finarr[10];
    int i, n;
    char pos;

    for(i=0; i<10; i++)
    {
        printf("Enter a number[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array of 10 element is : ");
    for(i=0; i<10; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    printf("Enter a number of elements to shift either left or right : ");
    scanf("%d", &n);

    printf("Enter where to shift. R for right or L for left. : ");
    scanf(" %c", &pos);

    for(i=0; i<10; i++)
    {
        finarr[i] = 0;
    }

    if(pos == 'l' || pos == 'L')
    {
        for(i=0; i<10-n; i++)
        {
            finarr[i] = arr[i+n];
        }
    }
    else if(pos == 'r' || pos == 'R')
    {
        for(i=n; i<10; i++)
        {
            finarr[i] = arr[i-n];
        }
    }
    else
    {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Shifted array : ");
    for(i=0; i<10; i++)
    {
        printf("%d, ", finarr[i]);
    }
    printf("\n");
    return 0;
}