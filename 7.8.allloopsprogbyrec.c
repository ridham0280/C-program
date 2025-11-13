#include<stdio.h>

void firsttennaturalnumbers(int n);
void firsttenoddnumbers(int n);
void firsttenevennumbers(int n);
void printnnatural(int current, int n);
void firstnnaturalnumbers();
void printnodd(int current, int n);
void firstnoddnumbers();
void printneven(int current, int n);
void firstnevennumbers();
int sumofnnatural(int current, int n);
void firstnnaturalsum();
int sumofnodd(int current, int n);
void firstnoddsum();
int sumofneven(int current, int n);
void firstnevensum();
int factorialofnum(int n);
void factorial();
void printnamefun(char name[], int n);
void printname();
void printnname(char name[], int n);
void printnamentimes();
int sumofnumdivbythirteen(int n);
void sumofnumbersdivisiblebythirteen();
void sumavgof10values(float arr[], int n);
float sumofarr(float arr[], int n);
void sumandavgof10values();
void sumavgofnvalues(float[], int i, int n);
float nsumofarr(float arr[], int i, int n);
void sumandavgofnvalues();
void arrinput(float arr[], int n);
void findlarsma(float arr[], int n, float *max, float *min);
void larsmaof100();
void takearr(float arr[], int n);
void posnegcou(float arr[], int i, int n, int *pos, int *neg, int *zero);
void posnegzecount();
void studentarr(char sex[], int n);
void cousex(char sex[], int n, int *boys, int *girls);
void printsexcount();
void printnumdivby5in100(int n);
int sumofallnumdivby3in100(int n);
void sumofnumdivby3in100(int n);
void separatedigit();
int countdig(int n);
void countnumindigit();
int sumofdigit(int n);
void sumofnumdigit();
void reversedigit();
int reversenum(int n, int rev);
void palindromenum();
int sumofcube(int n);
void checkarmstrong();
int findfactor(int n);
void printfactor();
int finddivsum(int n, int i);
void printperfect();
int checkprime(int n, int i);
void printprime();
int checkprimenum(int n, int i);
void printprimenosbet1to500(int n);
int checkprimenos(int n, int i);
int findsumofprime(int n);
void printsumofprimebet500();
int primenoscount(int n, int i);
int countprime(int n);
void countprimenosbet1to500();
int checkautomorphic(int n, int sq);
void printautomorphic();
void fibonacciseries(int n, int a, int b, int count);
void printfibonacci();

int main()
{
    int opt = 0;

    while(opt != 35)
    {
        printf("\nWelcome to recursion program\n");
        printf("1. Print 1st 10 natural numbers.\n");
        printf("2. Print 1st 10 odd numbers.\n");
        printf("3. Print 1st 10 even numbers.\n");
        printf("4. Print 1st n natural numbers.\n");
        printf("5. Print 1st n odd numbers.\n");
        printf("6. Print 1st n even numbers.\n");
        printf("7. Print sum of n natural numbers.\n");
        printf("8. Print sum of n odd numbers.\n");
        printf("9. Print sum of n even numbers.\n");
        printf("10. Print factorial of a given number.\n");
        printf("11. Print your name 5 times.\n");
        printf("12. Print your name n times.\n");
        printf("13. Print sum of all nos. divisible by 13 in range of 1 to 100.\n");
        printf("14. Calculate sum and mean of 10 values.\n");
        printf("15. Calculate sum and mean of any n values.\n");
        printf("16. Find out largest and smallest out of 100 nos.\n");
        printf("17. Count +ve,-ve and zeroes in 200 values.\n");
        printf("18. Find out how many boys and girls are there in a class of 50 students.\n");
        printf("19. Print all integers from 1 to 100, which are divisible by 5.\n");
        printf("20. Print sum of all integers from 1 to 100, which are divisible by 3.\n");
        printf("21. Separate digits of a given no.\n");
        printf("22. Count how many digits are there in a given no.\n");
        printf("23. Summation of digits of a given no.\n");
        printf("24. Reverse digits of a given no.\n");
        printf("25. Check whether a given no. is palindrome no or not.\n");
        printf("26. Find out whether a given no. is armstrong no. or not.\n");
        printf("27. Find out factors of a given no.\n");
        printf("28. Find out whether a given no. is perfect no. or not.\n");
        printf("29. Check whether a given no. is prime no. or not.\n");
        printf("30. Find out all prime nos. between 1 and 500.\n");
        printf("31. Find out summation of prime nos. between 1 & 500.\n");
        printf("32. Find out how many prime nos. are there between 1 and 500.\n");
        printf("33. Check whether a given no. is automorphic no. or not.\n");
        printf("34. Print fibonacci series. 1,1,2,3,5,8,…upto n nos.\n");
        printf("35. Exit.\n");
        printf("Enter your choice : ");
        scanf("%d", &opt);

        if(opt == 35)
        {
            printf("Exiting program.\n");
            return 0;
        }
        
        switch(opt)
        {
            case 1: firsttennaturalnumbers(1); printf("\n"); break;
            case 2: firsttenoddnumbers(1); printf("\n"); break;
            case 3: firsttenevennumbers(2); printf("\n"); break;
            case 4: firstnnaturalnumbers(); printf("\n"); break;
            case 5: firstnoddnumbers(); printf("\n"); break;
            case 6: firstnevennumbers(); printf("\n"); break;
            case 7: firstnnaturalsum(); printf("\n"); break;
            case 8: firstnoddsum(); printf("\n"); break;
            case 9: firstnevensum(); printf("\n"); break;
            case 10: factorial(); printf("\n"); break;
            case 11: printname(); printf("\n"); break;
            case 12: printnamentimes(); printf("\n"); break;
            case 13: sumofnumbersdivisiblebythirteen(); printf("\n"); break;
            case 14: sumandavgof10values(); printf("\n"); break;
            case 15: sumandavgofnvalues(); printf("\n"); break;
            case 16: larsmaof100(); printf("\n"); break;
            case 17: posnegzecount(); printf("\n"); break;
            case 18: printsexcount(); printf("\n"); break;
            case 19: printnumdivby5in100(1); printf("\n"); break;
            case 20: sumofnumdivby3in100(1); printf("\n"); break;
            case 21: separatedigit(); printf("\n"); break;
            case 22: countnumindigit(); printf("\n"); break;
            case 23: sumofnumdigit(); printf("\n"); break;
            case 24: reversedigit(); printf("\n"); break;
            case 25: palindromenum(); printf("\n"); break;
            case 26: checkarmstrong(); printf("\n"); break;
            case 27: printfactor(); printf("\n"); break;
            case 28: printperfect(); printf("\n"); break;
            case 29: printprime(); printf("\n"); break;
            case 30: printprimenosbet1to500(2); printf("\n"); break;
            case 31: printsumofprimebet500(); printf("\n"); break;
            case 32: countprimenosbet1to500(); printf("\n"); break;
            case 33: printautomorphic(); printf("\n"); break;
            case 34: printfibonacci(); printf("\n"); break;
            default: printf("Invalid input, Try agian.\n");
        }
    }
    return 0;
}

// 1.
void firsttennaturalnumbers(int n)
{
    if(n == 11)
        return;

    printf("%d ", n);
    firsttennaturalnumbers(n+1);
}

// 2.
void firsttenoddnumbers(int n)
{
    if(n > 20)
        return;

    printf("%d ", n);
    firsttenoddnumbers(n+2);
}

// 3.
void firsttenevennumbers(int n)
{
    if(n > 20)
        return;
    
    printf("%d ", n);
    firsttenevennumbers(n+2);
}

// 4. 
void printnnatural(int current, int n)
{
    if(current > n)
        return;

    printf("%d ", current);
    printnnatural(current + 1, n);
}
void firstnnaturalnumbers()
{
    int n;

    printf("Enter numbers to print : ");
    scanf("%d", &n);

    printnnatural(1, n);
}

// 5.
void printnodd(int current, int n)
{
    if(current > 2*n)
        return;
    
    printf("%d ", current);
    printnodd(current + 2, n);
}
void firstnoddnumbers()
{
    int n;
    
    printf("Enter numbers to print : ");
    scanf("%d", &n);

    printnodd(1, n);
}

// 6.
void printneven(int current, int n)
{
    if(current > 2*n)
        return;
    
    printf("%d ", current);
    printneven(current + 2, n);
}
void firstnevennumbers()
{
    int n;

    printf("Enter numbers to print : ");
    scanf("%d", &n);

    printneven(2, n);
}

// 7.
int sumofnnatural(int current, int n)
{
    if(current > n)
        return 0;
    
    return current + sumofnnatural(current + 1, n);
}
void firstnnaturalsum()
{
    int n;
    printf("Enter numbers to sum : ");
    scanf("%d", &n);

    int sum = sumofnnatural(1, n);
    printf("Sum : %d\n", sum);
}

// 8.
int sumofnodd(int current, int n)
{
    if(current > 2*n)
        return 0;
    
    return current + sumofnodd(current + 2, n);
}
void firstnoddsum()
{
    int n;
    printf("Enter numbers to sum : ");
    scanf("%d", &n);

    int sum = sumofnodd(1, n);
    printf("Sum : %d\n", sum);
}

// 9.
int sumofneven(int current, int n)
{
    if(current > 2*n)
        return 0;
    
    return current + sumofneven(current + 2, n); 
}
void firstnevensum()
{
    int n;
    printf("Enter numbers to sum : ");
    scanf("%d", &n);

    int sum = sumofneven(2, n);
    printf("Sum : %d\n", sum);
}

// 10.
int factorialofnum(int n)
{
    if(n == 0 || n == 1)
        return 1;
    
    return n * factorialofnum(n-1);
}
void factorial()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    printf("Answer : %d", factorialofnum(n));
}

// 11.
void printnamefun(char name[], int n)
{
    if(n == 0)
        return;
    
    printf("Your name : %s\n", name);
    printnamefun(name, n-1);
}
void printname()
{
    char name[100];

    printf("Enter your name : ");
    scanf("%s", name);

    printnamefun(name, 5);
}

// 12.
void printnname(char name[], int n)
{
    if(n == 0)
        return;

    printf("Your name : %s\n", name);
    printnname(name, n-1);
}
void printnamentimes()
{
    char name[100];
    int n;
    printf("Enter your name : ");
    scanf("%s", name);

    printf("Enter number to print : ");
    scanf("%d", &n);

    printnname(name, n);
}

// 13.
int sumofnumdivbythirteen(int n)
{
    if(n > 100)
        return 0;

    if(n % 13 == 0)
        return n + sumofnumdivbythirteen(n+1);
    else
        return sumofnumdivbythirteen(n + 1);
}
void sumofnumbersdivisiblebythirteen()
{
    int sum = sumofnumdivbythirteen(1);
    printf("Sum : %d", sum);
}

// 14.
void sumavgof10values(float arr[], int n)
{ 
    if(n == 10)
        return;

    printf("Enter [%d] number : ", n+1);
    scanf("%f", &arr[n]);

    sumavgof10values(arr, n+1);
}
float sumofarr(float arr[], int n)
{
    if(n == 10)
        return 0;

    return arr[n] + sumofarr(arr, n+1);
}
void sumandavgof10values()
{
    float arr[100];
    float sum, avg;

    sumavgof10values(arr, 0);
    sum = sumofarr(arr, 0);
    avg = sum / 10.0;

    printf("Sum : %f\n", sum);
    printf("Mean : %f\n", avg);
}

// 15.
void sumavgofnvalues(float arr[], int i, int n)
{
    if(i == n)
        return;

    printf("Enter %d number : ", i+1);
    scanf("%f", &arr[i]);

    sumavgofnvalues(arr, i+1, n);
}
float nsumofarr(float arr[], int i, int n)
{
    if(i == n)
        return 0;

    return arr[i] + nsumofarr(arr, i+1, n);
}
void sumandavgofnvalues()
{
    float arr[100];
    float sum, avg;
    int n;

    printf("Enter total numbers : ");
    scanf("%d", &n);

    sumavgofnvalues(arr, 0, n);

    sum = nsumofarr(arr, 0, n);
    avg = sum / n;

    printf("Sum : %f\n", sum);
    printf("Mean : %f\n", avg);
}

// 16.
void arrinput(float arr[], int n)
{
    if(n == 100)
        return;
    
    printf("Enter %d number : ", n+1);
    scanf("%f", &arr[n]);
    arrinput(arr, n+1);
}
void findlarsma(float arr[], int n, float *max, float *min)
{
    if(n == 100)
        return;

    if(arr[n] > *max)
        *max = arr[n];
    if(arr[n] < *min)
        *min = arr[n];
    findlarsma(arr, n+1, max, min);
}
void larsmaof100()
{
    float arr[100];
    float max, min;

    arrinput(arr, 0);
    max = min = arr[0];

    findlarsma(arr, 1, &max, &min);

    printf("Largest number : %f\n", max);
    printf("Smallest number : %f\n", min);
}

// 17.
void takearr(float arr[], int n)
{
    if(n == 200)
        return;

    printf("Enter %d number : ", n+1);
    scanf("%f", &arr[n]);

    takearr(arr,  n+1);
}
void posnegcou(float arr[],int i, int n, int *pos, int *neg, int *zero)
{
    if(i == n)
        return;
    
    if(arr[i] > 0)
        (*pos)++;
    if(arr[i] < 0)
        (*neg)++;
    if(arr[i] == 0)
        (*zero)++;
    posnegcou(arr, i+1, n, pos, neg, zero);
}
void posnegzecount()
{
    float arr[200];
    int n;
    int pos = 0, neg = 0, zero = 0;

    takearr(arr, 0);
    posnegcou(arr, 0, 200, &pos, &neg, &zero);

    printf("Total positive : %d\n", pos);
    printf("Total negative : %d\n", neg);
    printf("Total zero : %d\n", zero);
}

// 18. 
void studentarr(char sex[], int n)
{
    if(n == 50)
        return;

    printf("student %d: ", n+1);
    scanf(" %c", &sex[n]);

    studentarr(sex, n+1);
}
void cousex(char sex[], int n, int *boys, int *girls)
{
    if(n == 50)
        return;

    if(sex[n] == 'm' || sex[n] == 'M')
        (*boys)++;
    if(sex[n] == 'F' || sex[n] == 'f')
        (*girls)++;

    cousex(sex, n+1, boys, girls);
}
void printsexcount()
{
    char sex[50];
    int n;
    int boys = 0, girls = 0;

    printf("Enter M for Male and F for Female.\n");
    studentarr(sex, 0);
    cousex(sex, 0, &boys, &girls);

    printf("Total boys : %d\n", boys);
    printf("Total girls : %d\n", girls);
}

// 19.
void printnumdivby5in100(int n)
{
    if(n > 100)
        return;

    if(n % 5 == 0)
        printf("%d ", n);

    printnumdivby5in100(n+1);
}

// 20.
int sumofallnumdivby3in100(int n)
{
    if(n == 100)
        return 0;
    
    if(n % 3 == 0)
        return n + sumofallnumdivby3in100(n+1);
    else
        return sumofallnumdivby3in100(n+1);
}
void sumofnumdivby3in100(int n)
{
    int sum;

    sum = sumofallnumdivby3in100(1);

    printf("Sum : %d", sum);
}

// 21.
void separatedigit()
{
    static int n = -1;  

    if (n == -1) 
    {
        printf("Enter a number: ");
        scanf("%d", &n);
    }

    if (n == 0)
        return;

    printf("%d ", n % 10); 
    n = n / 10;              

    separatedigit();        
}

// 22.
int countdig(int n)
{
    if(n == 0)
        return 0;
    return 1 + countdig(n/10);
}
void countnumindigit()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    int count = countdig(n);
    printf("Number of digits : %d\n", count);
}

// 23. 
int sumofdigit(int n)
{
    if(n == 0)
        return 0;
    return (n % 10) + sumofdigit(n / 10);
}
void sumofnumdigit()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int sum = sumofdigit(n);

    printf("Sum : %d\n", sum);
}

// 24.
void reversedigit()
{
    static int n = -1;
    if(n == -1)
    {
        printf("Enter a number : ");
        scanf("%d", &n);
    }

    if(n == 0)
        return;
    printf("%d", n % 10);
    n = n / 10;
    reversedigit();
}

// 25.
int reversenum(int n, int rev)
{
    if(n == 0)
        return rev;
    return reversenum(n / 10, rev * 10 + n % 10);
}
void palindromenum()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if(num == reversenum(num,0))
        printf("Given number is palindrome.\n");
    else
        printf("Given number is not palindrome.\n");
}

// 26.
int sumofcube(int n)
{
    if(n == 0)
        return 0;
    
    int dig = n % 10;
    return (dig * dig * dig) + sumofcube(n / 10);
}
void checkarmstrong()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if(n == sumofcube(n))
        printf("Given number is armstrong number.\n");
    else
        printf("Given number is not armstrong number.\n");
}

// 27.
int findfactor(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * findfactor(n-1);
}
void printfactor()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if(n < 0)
        printf("Factorial is not defined for negative numbers.\n");

    int ans = findfactor(n);

    printf("Answer : %d\n", ans);
}

// 28. 
int finddivsum(int n, int i)
{
    if(i == n)
        return 0;
    if(n % i == 0)
        return i + finddivsum(n, i+1);
    else
        return finddivsum(n, i+1);
}
void printperfect()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int per = finddivsum(n, 1);

    if(per == n && n != 0)
        printf("%d is a perfect number.\n", n);
    else
        printf("%d is not a perfect number.\n", n);
}

// 29. 
int checkprime(int n, int i)
{
    if(n <= 1)
        return 0;
    if(i * i > n)
        return 1;
    if(n % i == 0)
        return 0;
    return checkprime(n, i+1);
}
void printprime()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int ans = checkprime(n, 2);

    if(ans == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}

// 30.
int checkprimenum(int n, int i)
{
    if(n <= 1)
        return 0;
    if(i * i > n)
        return 1;
    if(n % i == 0)
        return 0;
    return checkprimenum(n, i+1);
}
void printprimenosbet1to500(int n)
{
    if(n > 500)
        return;
    if(checkprimenum(n,2))
        printf("%d ", n);
    printprimenosbet1to500(n+1);
}

// 31. 
int checkprimenos(int n, int i)
{
    if(n <= 1)
        return 0;
    if(i * i > n)
        return 1;
    if(n % i == 0)
        return 0;
    return checkprimenos(n, i+1);
}
int findsumofprime(int n)
{
    if(n > 500)
        return 0;
    
    if(checkprimenos(n, 2))
        return n + findsumofprime(n+1);
    else
        return findsumofprime(n+1);
}
void printsumofprimebet500()
{
    int sum = findsumofprime(2);

    printf("Answer : %d\n", sum);
}

// 32.
int primenoscount(int n, int i)
{
    if(n <= 1)
        return 0;
    if(i * i > n)
        return 1;
    if(n % i == 0)
        return 0;
    return primenoscount(n, i+1);
}
int countprime(int n)
{
    if(n > 500)
        return 0;

    if(primenoscount(n, 2))
        return 1 + countprime(n+1);
    else
        return countprime(n+1);
}
void countprimenosbet1to500()
{
    int total = countprime(1);

    printf("Total : %d\n", total);
}

// 33.
int checkautomorphic(int n, int sq)
{
    if(n == 0)
        return 1;
    if((n%10) != (sq%10))
        return 0;
    return checkautomorphic(n/10, sq/10);
}
void printautomorphic()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int square = n * n;

    if(checkautomorphic(n, square))
        printf("%d is an Automorphic number.\n", n);
    else
        printf("%d is not an Automorphic number.\n", n);
}

// 34.
void fibonacciseries(int n, int a, int b, int count)
{
    if(count > n)
        return;

    printf("%d ", a);

    fibonacciseries(n, b, a+b, count+1);
}
void printfibonacci()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    printf("Fibonacci seriese : ");
    fibonacciseries(n, 1, 1, 1);
    printf("\n");
}