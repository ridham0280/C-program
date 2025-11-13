#include<stdio.h>

int main()
{
    int i, sum, numbers[10];
    float mean;

    printf("Enter 10 numbers by space: ");
    for(i=1; i<=10; i++)
    {
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    mean = sum / 10.0;

    printf("sum = %d\n", sum);
    printf("mean = %2f", mean);
    return 0;
}