#include<stdio.h>

int main()
{
    float net_sal, gross_sal, allowances, deductions;

    printf("Enter gross salary: ");
    scanf("%f", &gross_sal);

    if(gross_sal>10000)
    {
        allowances = 0.1 * gross_sal;
        deductions = 0.03 * gross_sal;
        net_sal = gross_sal + allowances - deductions;

        printf("Your net salary is: %f\n", net_sal);
    }

    else if(gross_sal<10000 && gross_sal>5000)
    {
        allowances = 0.07 * gross_sal;
        deductions = 0.02 * gross_sal;
        net_sal = gross_sal + allowances - deductions;

        printf("Your net salary is: %f\n", net_sal);
    }

    else
    {
        net_sal = gross_sal;

        printf("Your net salary is: %f\n", net_sal);
    }
    return 0;
}