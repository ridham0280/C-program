// Here 1$ = 48Rs, And 1 pound = 70Rs.
#include<stdio.h>
int main()
{
    float doll, pou;

    printf("Enter dollars : ");
    scanf("%f", &doll);

    pou = doll * 48 / 70;
    
    printf("Pound : %f", pou);
    getchar();
    return 0;
}