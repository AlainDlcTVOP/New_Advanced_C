#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *f = NULL;
    char ch[100];

    if (f = fopen("data.txt", "r") == NULL)
    {
        printf("Cannot open the file....");
        exit(1);
    }
    while (!feof(f))
    {
        fgets(ch, 100, f);
        printf("%s", ch);
    }
    for (int i = 0; i < 10; i++)
    {
        fprintf(f, "The count number is %d\n", i + i);
    }
    printf("File content is--\n");
    printf("\n.....print the strings.....\n\n");
    fclose(ch);

    return 0;
}
