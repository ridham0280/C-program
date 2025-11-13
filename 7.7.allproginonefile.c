#include<stdio.h>

void powerfunction();
void leapyearfunction();
int factorial(int a);
void factorialfunction();
void swapvaluefunction();
void maxminarrfunction();
void calculatorprogram();

// Calculator sub functions
void add(float arr[], int n);
void subtraction(float arr[], int n);
void multiplication(float arr[], int n);
void division(float arr[], int n);

int main()
{
    int choice = 0;
    while(choice != 7)
    {
        printf("\nChoose program : \n");
        printf("1. Power function\n");
        printf("2. Leap year check\n");
        printf("3. Factorial (recursion)\n");
        printf("4. Swap using call by value\n");
        printf("5. Find max/min using call by reference\n");
        printf("6. Calculator\n");
        printf("7. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        if(choice == 7)
        {
            printf("Exiting program.\n");
            break;
        }

        switch(choice)
        {
            case 1: powerfunction(); break;
            case 2: leapyearfunction(); break;
            case 3: factorialfunction(); break;
            case 4: swapvaluefunction(); break;
            case 5: maxminarrfunction(); break;
            case 6: calculatorprogram(); break;
            default: printf("Invalid input. Try again.\n");
        }
    }
    return 0;
}

// Power function
void powerfunction()
{
    float a, pow = 1.0;
    int b;

    printf("Enter base : ");
    scanf("%f", &a);

    printf("Enter power : ");
    scanf("%d", &b);

    if(b == 0)
    {
        printf("Answer : 1.0\n");
    }
    else if(a == 0)
    {
        printf("Answer : 0.0\n");
    }
    else if(b > 0)
    {
        for(int i = 0; i < b; i++)
        {
            pow *= a;
        }
        printf("Answer : %.2f\n", pow);
    }
    else if(b < 0)
    {
        for(int i = 0; i < -b; i++)
        {
            pow *= a;
        }
        pow = 1.0 / pow;
        printf("Answer : %.4f\n", pow);
    }
}

// Leap year check function
void leapyearfunction()
{
    int year;

    printf("Enter year : ");
    scanf("%d", &year);

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
}

// Factorial recursion function
int factorial(int a)
{
    if(a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a-1);
    }
}
void factorialfunction()
{
    int a, ans;

    printf("Enter a number : ");
    scanf("%d", &a);

    ans = factorial(a);

    printf("Answer : %d\n", ans);
}

// Swap using call by value
void swapvaluefunction()
{
    float a, b, temp;

    printf("Enter first number (a) : ");
    scanf("%f", &a);

    printf("Enter second number (b) : ");
    scanf("%f", &b);


    printf("Before swpping values : a = %f, b = %f\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swpping values : a = %f, b = %f\n", a, b);
}

// Find max/min value using call by reference
void maxminarrfunction()
{
    int arr[100], size;
    int *max, *min;

    printf("Enter a size of array : ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++)
    {
        printf("Enter [%d] number : ", i+1);
        scanf("%d", &arr[i]);
    }

    max = &arr[0];
    min = &arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > *max)
        {
            max = &arr[i];
        }
        if(arr[i] < *min)
        {
            min = &arr[i];
        }
    }

    printf("Maximum number : %d\n", *max);
    printf("Minimum number : %d\n", *min);
}

// Calculator function
void calculatorprogram()
{
    float arr[100];
    int size, opt;

    printf("\nWelcome to calculator \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Choose option : ");
    scanf("%d", &opt);

    if(opt == 5)
    {
        printf("Exiting Calculator.\n");
        return;
    }
    printf("Enter size of numbers : ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++)
    {
        printf("Enter [%d] number ; ", i+1);
        scanf("%f", &arr[i]);
    }

    switch(opt)
    {
        case 1: add(arr, size); break;
        case 2: subtraction(arr, size); break;
        case 3: multiplication(arr, size); break;
        case 4: division(arr, size); break;
        default: printf("Invalid input. Try again.\n");
    }
    
    
    
    
}

// Calculator sub functiobns
void add(float arr[], int n)
{
    float sum = 0.0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum : %.2f\n", sum);
}

void subtraction(float arr[], int n)
{
    float sub = arr[0];

    for(int i = 1; i < n; i++)
    {
        sub -= arr[i];
    }
    printf("Sub : %.2f\n", sub);
}

void multiplication(float arr[], int n)
{
    float mul = 1.0;

    for(int i = 0; i < n; i++)
    {
        mul *= arr[i];
    }
    printf("Mul : %.2f\n", mul);
}

void division(float arr[], int n)
{
    float div = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] == 0)
        {
            printf("Division by 0 is not possible.\n");
            return;
        }
        div /= arr[i];
    }
    printf("Division : %.4f\n", div);
}