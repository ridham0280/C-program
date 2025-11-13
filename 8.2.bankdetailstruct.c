#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct bankaccount
{
    int acc_no;
    char acc_name[100];
    float balance;
};

void lessthan100(struct bankaccount customer[], int n);
void transiction(struct bankaccount customer[], int n);

int main()
{
    int n;
    struct bankaccount customer[10]; 
    printf("How many customers do you want to enter (maximum 10) : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("\nCustomer %d.\n", i+1);

        printf("Enter account number : ");
        scanf("%d", &customer[i].acc_no);
        getchar();

        printf("Enter name : ");
        fgets(customer[i].acc_name, sizeof(customer[i].acc_name), stdin);
        customer[i].acc_name[strcspn(customer[i].acc_name, "\n")] = 0;

        printf("Enter bank balance : ");
        scanf("%f", &customer[i].balance);
        getchar();
    }

    lessthan100(customer, n);

    while(1)
    {
        transiction(customer, n);
    }
    return 0;
}

void lessthan100(struct bankaccount customer[],int n)
{
    printf("\nCustomers who have balance less than 100.\n\n");
    for(int i = 0; i < n; i++)
    {
        if(customer[i].balance < 100)
        {
            printf("Account Number : %d\nName : %s\nBalance : %.2f\n\n", customer[i].acc_no, customer[i].acc_name, customer[i].balance);
        }
    }
}

void transiction(struct bankaccount customer[], int n)
{
    int acc_number, depwit, ans, found = 0;
    float  amount;

    printf("Enter 1 for deposite/withdrawal or 0 for quite  : ");
    scanf("%d", &ans);

    if(ans == 1)
    {
        printf("Enter Account number : ");
        scanf("%d", &acc_number);

        printf("Enter 1 for deposite or 0 for withdrawal : ");
        scanf("%d", &depwit);

        printf("Enter Amount : ");
        scanf("%f", &amount);

        for(int i = 0; i < n; i++)
        {
            if(acc_number == customer[i].acc_no)
            {
                found = 1;
                if(depwit == 1)
                {
                    customer[i].balance += amount;
                    printf("Deposit successfully! New balance : %.2f\n", customer[i].balance);
                }
                else if(depwit == 0)
                {
                    if(amount > customer[i].balance)
                    {
                        printf("The balance is insufficient for the specified withdrawal.\n");
                    }
                    else
                    {
                        customer[i].balance -= amount;
                        printf("Your current amount is : %.2f\n", customer[i].balance);
                    }
                }
                break;
            }
        }
    }
    else if(ans == 0)
    {
        printf("Thanks for visiting.\n");
        exit(0);
    }  
    if(!found)
    {
        printf("Invalid account number. Try again.\n");
    }
}