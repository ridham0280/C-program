//C = 5/9 * (F-32)

#include<stdio.h>

int main()
{
    float fer, cel;

    printf("Enter fahrenheit : ");
    scanf("%f", &fer);

    cel = (5.0 / 9.0) * (fer - 32);

    printf("Celcius : %f", cel);

    return 0;
}