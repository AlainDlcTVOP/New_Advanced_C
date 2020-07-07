#include <stdio.h>

int fun();
int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        fun();
    }

    return 0;
}
int fun()
{
    static int count = 100;
    int localvar = 0;
    printf("automatic=%d, static = %d\n", localvar, count);
    localvar++;
    count++;
    return count;
}
