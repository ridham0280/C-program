#include<stdio.h>

int main()
{
    int i, pos, neg, zero;
    int num[200];

    pos = 0;
    neg = 0;
    zero = 0;

    printf("Enter 200 values: ");
    for(i=1; i<=200; i++)
    {
        scanf("%d", &num[i]);

        if(num[i]<0)
        {
            neg++;
        }
        else if(num[i]>0)
        {
            pos++;
        }
        else if(num[i]==0)
        {
            zero++;
        }
    }

    printf("Total positive values: %d\n", pos);
    printf("Total negative values: %d\n", neg);
    printf("Total zeros: %d", zero);

    return 0;
}