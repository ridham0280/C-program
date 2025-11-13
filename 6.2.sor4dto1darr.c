#include<stdio.h>

int main()
{
    int mat[4][4], arr[16];
    int i, j, k=0, temp;

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Enter an element [%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            arr[k++] = mat[i][j];
        }
    }

    for(i=0; i<16; i++)
    {
        for(j=i+1; j<16; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted 1D array : \n");
    for(i=0; i<16; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}