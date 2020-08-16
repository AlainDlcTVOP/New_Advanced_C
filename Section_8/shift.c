#include <stdio.h>

int main()
{
    int w1 = 1; // 0000 0000 0000 0000 0000
    unsigned int w2 = 5;
    int result = 0;

    // result = w1 << 2; // left shift

    result = w2 >> 1;

    printf("%d ", result);

    return 0;
}
