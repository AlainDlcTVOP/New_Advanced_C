#include <stdio.h>

int main()
{
    puts("Enter a char to read from the terminal");
    char ch = '\0';

    ch = getc(stdin);
    printf("read in character %c\n", ch);
    return 0;
}
