// Here 1$ = 48Rs.
#include<stdio.h>
int main()
{
    float rs, doll;

    printf("Enter dollars : ");
    scanf("%f", &doll);

    rs = doll * 48;
    
    printf("Rupees : %f", rs);
    getchar();
    return 0;
}