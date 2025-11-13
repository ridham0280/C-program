#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200];

    // Ask for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n--- File Content ---\n");

    // Read each line until end of file
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);  // print each line
    }

    fclose(fp);
    printf("\n--- End of File ---\n");

    return 0;
}
