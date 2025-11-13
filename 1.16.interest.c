#include<stdio.h>

int main()
{
    float interest, p, r, n;

    printf("Enter principal : ");
    scanf("%f", &p);

    printf("Enter rate of interest : ");
    scanf("%f", &r);

    printf("Enter duration in years : ");
    scanf("%f", &n);

    interest = p*r*n/100;

    printf("Interest : %f", interest);

    return 0;
}