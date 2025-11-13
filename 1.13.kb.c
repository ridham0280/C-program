#include<stdio.h>

int main()
{
    float byte, kb, mb, gb;

    printf("Enter bytes : ");
    scanf("%f", &byte);

    kb = byte / 1024;
    mb = kb / 1024;
    gb= mb / 1024;

    printf("Kb : %f\n", kb);
    printf("Mb : %f\n", mb);
    printf("Gb : %f\n", gb);

    return 0;
}