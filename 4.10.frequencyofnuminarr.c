#include<stdio.h>

int main()
{
    int arr[10];
    int i, j, count;
    int freq[10] = {0};

    for(i=0; i<10; i++)
    {
        printf("Enter a number [%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array of 10 element is : \n");
    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Frequency of elemnts : \n");
    for(i=0; i<10; i++)
    {
        if(freq[i] == 1)
        {
            continue;
        }
        count = 1;

        for(j=i+1; j<10; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}