#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
    char buffer[32];
    size_t *b = buffer;
    size_t bufsize = 32;
    size_t characters;

    printf("Type something: ");
    characters = getline(&b, &bufsize, stdin);

    printf("%zu characters were read\n", characters);
    printf("You typed '%s'", buffer);

    return 0;
}
