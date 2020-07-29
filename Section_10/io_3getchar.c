#include <stdio.h>

int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)

        printf("%c\n", getchar());
    return 0;
}
