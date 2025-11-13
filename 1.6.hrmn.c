#include<stdio.h>
int main()
{
    float hr, min;

    printf("Enter hours : ");
    scanf("%f", &hr);

    min = hr * 60;

    printf("Minutes : %f", min);
    getchar();
    return 0;
}