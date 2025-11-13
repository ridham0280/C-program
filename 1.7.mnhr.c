#include<stdio.h>
int main()
{
    float hr, min;

    printf("Enter minutes : ");
    scanf("%F", &min);

    hr = min / 60;

    printf("Hours : %f", hr);
    getchar();
    return 0;
}