#include<stdio.h>

int main()
{
    float net_sal, gross_sal, disc;

    printf("Enter gross sales: ");
    scanf("%f", &gross_sal);

    if(gross_sal>20000)
    {
        disc = 0.15 * gross_sal;
        net_sal = gross_sal - disc;
        printf("Your net sales is: %f", net_sal);
    }

    else if(gross_sal>10000 && gross_sal<20000)
    {
        disc = 0.1 * gross_sal;
        net_sal = gross_sal - disc;
        printf("Your net sales is: %f", net_sal);
    }

    else
    {
        disc = 0.05 * gross_sal;
        net_sal = gross_sal - disc;
        printf("Your net sales is: %F", net_sal);
    }
    return 0;
}