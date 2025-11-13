#include<stdio.h>

int main()
{
    int sub1, sub2, sub3, avg;

    printf("Enter marks of first subject: ");
    scanf("%d", &sub1);

    printf("Enter marks of second subject: ");
    scanf("%d", &sub2);

    printf("Enter marks of third subject: ");
    scanf("%d", &sub3);

    avg = ( sub1 + sub2 + sub3) / 3;

    if(avg>=70)
    {
        printf("distinction");
    }

    else if(avg>=60 && avg<70)
    {
        printf("first class");
    }

    else if(avg>=50 && avg<60)
    {
        printf("second class");
    }

    else if(avg>=35 && avg<50)
    {
        printf("third class");
    }

    else if(avg<35 && avg>=0)
    {
        printf("failed");
    }

    else
    {
        printf("Enter valid marks.");
    }
    return 0;
}