#include<stdio.h>

int main()
{
    int arr1[2][3], arr2[2][3], arr[2][3];
    int i, j, n, m;

    printf("Enter rows : ");
    scanf("%d", &n);

    printf("Enter columns : ");
    scanf("%d", &m);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Enter a number of [%d][%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("First 2D array is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("Enter a number of [%d][%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Secondt 2D array is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("Sum of two array is : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}