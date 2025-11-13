#include<stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3], result[10][10];
    int n1, m1, n2, m2;
    int i, j, k;

    printf("Enter rows for first matrix : ");
    scanf("%d", &n1);

    printf("Enter columns for first matrix : ");
    scanf("%d", &m1);

    printf("Enter rows for second matrix : ");
    scanf("%d", &n2);

    printf("Enter columns for second matrix : ");
    scanf("%d", &m2);

    for(i=0; i<n1; i++)
    {
        for(j=0; j<m1; j++)
        {
            printf("Enter an element [%d][%d] : ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    if(m1 != n2)
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    printf("First matrices is : \n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<m1; j++)
        {
            printf("%d, ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0; i<n2; i++)
    {
        for(j=0; j<m2; j++)
        {
            printf("Enter an element [%d][%d] : ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Second matrices is : \n");
    for(i=0; i<n2; i++)
    {
        for(j=0; j<m2; j++)
        {
            printf("%d, ", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    if(n1 == n2 && m1 == m2)
    {
        printf("Addition of two matrices : \n");
        for(i=0; i<n1; i++)
        {
            for(j=0; j<m1; j++)
            {
                printf("%d, ", mat1[i][j] + mat2[i][j]);
            }
            printf("\n");
        }

        printf("Subtraction of two matrices : \n");
        for(i=0; i<n1; i++)
        {
            for(j=0; j<m1; j++)
            {
                printf("%d, ", mat1[i][j] - mat2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Addition and subtraction not possible.\n");
    }
    
    printf("Multiplication of two matrix : \n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<m2; j++)
        {
            result[i][j] = 0;
            for(k=0; k<m1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
            printf("%d, ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}