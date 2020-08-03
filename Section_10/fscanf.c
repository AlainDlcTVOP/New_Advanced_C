#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    char buff[MAX];

    fp = fopen("data.txt", "a+") == NULL)
    {
        fprintf(stdout, "Can't open the file\n");
        exit(EXIT_FAILURE);
    }

    while (fscanf(fp, "%s", buff) != EOF)
    {
        printf("%s", buff);
    }
    puts("Enter words to add the file press #");
    puts("key at the bigging of a line to terminate");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
        fprintf(fp, "%s\n", words);

    fclose(fp);

    return 0;
}
