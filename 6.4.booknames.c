#include<stdio.h>

int main()
{
    char book[3][100];
    char *ptr[3];
    int i;

    for(i=0; i<3; i++)
    {
        printf("Enter book name %d : ", i+1);
        fgets(book[i], sizeof(book[i]), stdin);
        ptr[i] = book[i];
    }

    printf("Books name are : \n");
    for(i=0; i<3; i++)
    {
        printf("%s", ptr[i]);
    }

    return 0;
}