#include<stdio.h>

int main()
{
    int arr[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int value, i, count;

    printf("Enter a value : ");
    scanf("%d", &value);
    
    printf("Minimum notes for value %d : \n", value);

    for(i=0; i<9; i++)
    {
        count = value / arr[i];
        if(count>0)
        {
            printf("%d note of %d Rs.\n", count, arr[i]);
            value = value % arr[i];
        }
    }
    return 0;
}