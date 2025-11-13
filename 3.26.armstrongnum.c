#include<stdio.h>
#include<math.h>

int main()
{
    int num, digit, count, ans, temp, sum, number;

    printf("Enter number : ");
    scanf("%d", &num);

    temp = num;
    count = 0;
    while(num>0)
    {
        digit = num % 10;
        count++;
        num = num / 10;
    }

    sum = 0;
    number = temp;
    while(temp>0)
    {
        digit = temp % 10;
        ans = pow(digit, count);
        sum = sum + ans;
        temp = temp / 10;
    }

    if(sum == number)
    {
        printf("Given number %d is armstrong number.", number);
    }
    else
    {
        printf("Given number %d is not armstrong number", number);
    }
    return 0;
}