#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char filename[100], ch;
    int lines = 0, words = 0, characters = 0, spaces = 0;
    int inWord = 0;

    // Ask for file name
    printf("Enter filename: ");
    scanf("%s", filename);

    // Open file
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Cannot open file %s\n", filename);
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == ' ')
            spaces++;
        if (ch == '\n')
            lines++;

        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0)
        {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("\n--- File Statistics ---\n");
    printf("Lines      : %d\n", lines);
    printf("Words      : %d\n", words);
    printf("Characters : %d\n", characters);
    printf("Spaces     : %d\n", spaces);

    return 0;
}
