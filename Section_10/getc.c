#include <stdio.h>

int main()
{
    char ch = '\0';
    FILE *fp;

    if (fp = fopen("someFile.c", "rw"))
    {
        ch = getc(fp);
        while (ch != EOF)
        {
            ch = getc(fp);
        }
        fclose(fp);
    }

    return 0;
}
