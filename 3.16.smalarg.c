#include<stdio.h>

int main()
{
    int n, i, largest, smallest;
    int num[100];

    n = 100;

    printf("Enter 100 numbers by space: ");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &num[i]);
    }

    largest = num[1];
    smallest = num[1];

    for(i=1; i<=n; i++)
    {
        if(num[i]>largest)
        {
            largest = num[i];
        }
        else if(num[i]<smallest)
        {
            smallest = num[i];
        }
    }

    printf("Largest number is: %d\n", largest);
    printf("Smallest number is: %d", smallest);

    return 0;
}