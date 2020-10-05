#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NUMBER 50

int main(int argc, char const *argv[])
{
    int i = 0;

    char str = '\0';

    srand(time(NULL));

    printf("%d\n", NUMBER);

    for (i = 0; i < NUMBER; i++)
    {

        printf("%0.4lf\n", rand() % (2001 - 1000) / 2.e3);
    }

    return 0;
}
