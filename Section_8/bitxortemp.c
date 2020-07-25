#include <stdio.h>

int main(int argc, char const *argv[])
{
    short int w1 = 147;
    short int w2 = 61;
    short int temp = 0;

    /* swop algo 
    temp = w1;
    w1 = w2;
    w2 = temp;  */

    w1 ^= w2;
    w2 ^= w1;
    w1 ^= w2;

    return 0;
}
