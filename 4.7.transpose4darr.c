#include<stdio.h>

int main()
{
    int arr[4][4];
    int i, j, temp;

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Enter a number [%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The 4D array is : \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("The transpose array is : \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}