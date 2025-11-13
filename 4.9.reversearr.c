#include<stdio.h>

int main()
{
    int arr[5];
    int i, n;

    printf("Enter a number between 1 to 5 : ");
    scanf("%d", &n);

    if(n<=5 && n>=1)
    {
        for(i=0; i<n; i++)
        {
            printf("Enter a number [%d] : ", i);
            scanf("%d", &arr[i]);
        }

        printf("Array of %d element is : \n", n);
        for(i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        printf("Reversed array of %d element is : \n", n);
        for(i=0; i<n; i++)
        {
            printf("%d ", arr[n-1-i]);
        }
        printf("\n");
    }
    else
    {
        printf("Enter a valid number.");
    }
    return 0;
}