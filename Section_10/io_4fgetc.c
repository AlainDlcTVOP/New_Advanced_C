#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char c = '\0';

    fp = fopen("myFile.c", "r");

    if (fp == NULL)
    {
        printf("Could not open file myFile.c");
        return 1;
    }

    printf("Reading the file myFile.c");
    while (1)
    {
        c = fgetc(fp);
        if (c == EOF)
            break;

        printf("%c", c);
    }
    printf("Closing the file test.c");
    fclose(fp);

    return 0;
}
