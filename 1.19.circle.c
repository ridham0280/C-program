#include<stdio.h>

int main()
{
    float r, area;

    printf("Enter radius of circle : ");
    scanf("%f", &r);

    area = (22.0/7) * r * r;

    printf("The area of circle is : %f", area);

    return 0;
}