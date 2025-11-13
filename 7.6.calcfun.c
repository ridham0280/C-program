#include<stdio.h>

float add(float arr[], int n);
float subtraction(float arr[], int n);
float multiply(float arr[], int n);
float division(float arr[], int n, int *error);

int main()
{
    int n, opt = 0;
    float arr[100], result;
    int divError;

    while(opt != 5)
    {
        printf("\nWelcome to Calculator.\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nChose an option(1/2/3/4/5) : ");
        scanf("%d", &opt);

        if(opt == 5)
        {
            printf("Exiting Calculator.");
            break;
        }

        if(opt < 1 || opt > 5)
        {
            printf("Invalid input. Try again.\n");
            continue;
        }

        printf("Enter size of numbers : ");
        scanf("%d", &n);

        for(int i=0; i<n; i++)
        {
            printf("Enter [%d] number : ", i+1);
            scanf("%f", &arr[i]);
        }

        if(n < 2)
        {
            printf("Enter at least two numbers.");
            break;
        }

        switch(opt)
        {
            case 1: 
                result = add(arr, n); 
                printf("Sum : %.2f\n", result);
                break;
            case 2:
                result = subtraction(arr, n); 
                printf("Subtraction : %.2f\n", result); 
                break;
            case 3: 
                result = multiply(arr, n); 
                printf("Multiplication : %.2f\n", result); 
                break;
            case 4: 
                divError = 0;
                result = division(arr, n, &divError); 
                if(divError)
                {
                    printf("Error : Division by 0 is not allowed.\n");
                }
                else
                {
                    printf("Division : %.2f\n", result); 
                }
                break;
            default: printf("Invalid input. Try again.");
        }
    }
    return 0;
}

float add(float arr[], int n)
{
    float sum = 0.0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float subtraction(float arr[], int n)
{
    float sub = arr[0];
    for(int i = 1; i < n; i++)
    {
        sub -= arr[i];
    }
    return sub;
}

float multiply(float arr[], int n)
{
    float mul = 1.0;
    for(int i = 0; i < n; i++)
    {
        mul *= arr[i];
    }
    return mul;
}

float division(float arr[], int n, int *error)
{
    float div = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i] == 0)
        {
            *error = 1;
            return 0;
        }
        div /= arr[i];
    }
    *error = 0;
    return div;
}