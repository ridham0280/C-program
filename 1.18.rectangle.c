#include<stdio.h>

int main()
{
    float length, width, perimeter, area;

    printf("Enter the length of rectangle (in meter) : ");
    scanf("%f", &length);

    printf("Enter the width of rectangle (in meter) : ");
    scanf("%f", &width);


    perimeter = 2 * ( length + width);
    area = length * width;

    printf("Perimeter of rectangle : %f m\n", perimeter);
    printf("Area of rectangle : %f m²", area);
}