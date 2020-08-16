#include <stdio.h>

int main(int argc, char const *argv[])
{
    short int w1 = 147;
    short int w2 = 61;
    short result = 0;

    result = w1 ^ w2;
    printf("%d", result);
    // 10010011
    // 00111101
    // --------
    // 10101110 = 174

    return 0;
}
