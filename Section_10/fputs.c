#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int fputs(const char *buffer, FILE *filePtr);

int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    fp = fopen("some.txt", "w");
    if (fp == NULL)
    {
        exit(1);
    }
    fputs("Hello There ", fp);
    fclose(fp);
    return 0;
}
