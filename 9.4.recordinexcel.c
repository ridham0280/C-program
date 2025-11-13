#include <stdio.h>

int main() {
    FILE *fp;
    int roll_no;
    char name[100];
    char choice;

    // Open file in write mode (or append if you want to keep old records)
    fp = fopen("students.csv", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the header row for Excel
    fprintf(fp, "Roll No,Name\n");

    // Loop to accept multiple records
    do {
        printf("Enter Roll No: ");
        scanf("%d", &roll_no);
        getchar();  // consume newline left by scanf

        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);

        // Remove newline from name if present
        if (name[strlen(name) - 1] == '\n')
            name[strlen(name) - 1] = '\0';

        // Write record to CSV file
        fprintf(fp, "%d,%s\n", roll_no, name);

        printf("Do you want to enter another record? (y/n): ");
        scanf(" %c", &choice);
        getchar();  // consume leftover newline

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("\nRecords saved successfully in 'students.csv'\n");
    printf("You can open 'students.csv' directly in MS Excel.\n");

    return 0;
}
