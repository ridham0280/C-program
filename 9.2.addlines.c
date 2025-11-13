#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[200];

    // Open file in write mode
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter lines of text (type STOP to end):\n");

    while (1) {
        printf("> ");
        gets(line);  // read one line from user (unsafe but used as per question)

        // Stop if user types STOP
        if (strcmp(line, "STOP") == 0)
            break;

        // Write line into the file
        fputs(line, fp);
        fputs("\n", fp);  // add newline after each line
    }

    fclose(fp);
    printf("\nData written successfully to 'data.txt'\n");

    return 0;
}
