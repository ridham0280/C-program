#include<stdio.h>

int main()
{
    float net_sal, gross_sal, allowance, deduction;

    printf("Enter gross salary : ");
    scanf("%f", &gross_sal);

    allowance = gross_sal * 0.1;
    deduction = gross_sal * 0.03;
    net_sal = gross_sal + allowance - deduction;

    printf("Your net salary is : %f", net_sal);

    return 0;
}