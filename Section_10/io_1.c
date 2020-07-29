#include <stdio.h>
//stidin terminal all defined in stdio.h
int main()
{

    char ch = '\0';
    FILE *fp;

    if (fp = fopen("somefile.c", "rw"))
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
