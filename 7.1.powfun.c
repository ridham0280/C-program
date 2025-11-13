#include<stdio.h>

float power(int a, int b);

int main()
{
    int a, b;
    float ans;

    printf("Enter base : ");
    scanf("%d", &a);
    
    printf("Enter power ; ");
    scanf("%d", &b);

    ans = power(a, b);

    printf("Power(a raised to b) : %f\n", ans);

    return 0;
}

float power(int a, int b)
{
    float pow = 1.0;
    
    if(b == 0)
    {
        return 1.0;
    }
    else if(a == 0)
    {
        return 0.0;
    }
    else if(b > 0)
    {
        for(int i = 0; i < b ; i++)
        {
            pow *= a;
        }
    }
    else
    {
        for(int i = 0; i < -b; i++)
        pow *= a;
        pow = 1.0 / pow;
    }
    return pow;
}