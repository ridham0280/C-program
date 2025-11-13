#include<stdio.h>

int main()
{
    float length, perimeter, area;

    printf("Enter the length of square (in meter) : ");
    scanf("%f", &length);

    perimeter = length * 4;
    area = length * length;

    printf("Perimeter of square : %f m\n", perimeter);
    printf("Area of square : %f m²", area);
}