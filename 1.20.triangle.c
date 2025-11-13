#include<stdio.h>

int main()
{
    float length, height, area;

    printf("Enter the length of triangle : ");
    scanf("%f", &length);

    printf("Enter the height of triangle : ");
    scanf("%f", &height);

    area = 0.5 * length * height;

    printf("Area of triangle : %f", area);

    return 0;
}