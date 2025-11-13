// Here 1$ = 48Rs.
#include<stdio.h>
int main()
{
    float rs, doll;

    printf("Enter ruppes : ");
    scanf("%f", &rs);

    doll = rs / 48;
    
    printf("Dollars : %f", doll);
    getchar();
    return 0;
}