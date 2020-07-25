#include <stdio.h>

int main(int argc, char const *argv[])
{
    signed int w1 = 154;
    signed int result = 0;

    result = ~(w1);
    printf("%d", result);
    return 0;

    // 10011010 = 154
    // --------
    // 01100101 = -155

    // 10011011  = 155
    //---------
    // 01100100 + 1 = 155 - 01100101
}
