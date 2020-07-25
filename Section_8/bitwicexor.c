#include <stdio.h>

int main(int argc, char const *argv[])
{
    short int w1 = 147;
    short int w2 = 61;
    short w3 = 0;

    w3 = w1 ^ w2;
    printf("%d", w3);
    // 10010011
    // 00111101
    // --------
    // 10101110 = 174

    return 0;
}
