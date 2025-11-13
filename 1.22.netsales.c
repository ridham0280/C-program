#include<stdio.h>

int main()
{
    float net_sal, gross_sal, disc;

    printf("Enter gross salary : ");
    scanf("%f", &gross_sal);

    disc = 0.1 * gross_sal;
    net_sal = gross_sal - disc;

    printf("Your net sale is : %f", net_sal);

    return 0;
}