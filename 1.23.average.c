#include<stdio.h>

int main()
{
    float a, b, c, tot, ave;

    printf("Enter first subject's obtain mark : ");
    scanf("%f", &a);

    printf("Enter second subject's obtain mark : ");
    scanf("%f", &b);

    printf("Enter third subject's obtain mark : ");
    scanf("%f", &c);

    tot = a + b + c;
    ave = (a + b + c) / 3;

    printf("The average marks is : %f\n", ave);
    printf("The total marks is : %f", tot);

    return 0;
}