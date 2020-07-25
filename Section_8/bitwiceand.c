#include <stdio.h>

int main()
{
    short int w1 = 25;
    short int w2 = 77;
    short int w3 = 0;

    w3 = w1 & w2;

    printf("%d\n", w3);

    // 25 00011001
    // 77 01001101
    // -------------
    //    00001001 = 9
    return 0;
}
