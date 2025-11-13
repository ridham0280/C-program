#include<stdio.h>

int main()
{
    int i, n, sum, numbers[100];
    float mean;

    printf("numbers to find sum and mean: ");
    scanf("%d", &n);

    printf("Enter numbers by space: ");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    mean = sum / n;

    printf("Sum = %d\n", sum);
    printf("Mean = %f", mean);
    return 0;
}