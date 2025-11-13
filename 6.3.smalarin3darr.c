#include<stdio.h>

int main()
{
    int mat[3][3];
    int *ptr = &mat[0][0];
    int i, j, min, max;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter an element [%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("3⤬3 matrix is : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d, ", mat[i][j]);
        }
        printf("\n");
    }

    max = min = *ptr;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            ptr = (*(mat+i)+j);
            if(*ptr > max)
            {
                max = *ptr;
            }
            if(*ptr < min)
            {
                min = *ptr;
            }
        }
    }

    printf("Largest number = %d\n", max);
    printf("Smallest number = %d\n", min);

    return 0;
}