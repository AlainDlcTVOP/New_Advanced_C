#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBER 50
int main()
{

    /* Intializes random number generator */
    srand(time(NULL));

    /* Print 5 random numbers from 0 to 49 */
    for (int i = 0; i <= NUMBER; i++)
    {
        printf(" 50 first %d randome %.2f\n ", i, (rand() % 2001 - 1000) / 2.e3);
    }

    return (0);
}
