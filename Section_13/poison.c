#include <stdio.h>

//#pragma GCC poison printf
// YOU DON'T ALLOW TO USE PRINTF
#pragma GCC warning "hello"
#pragma GCC error "what"
#pragma message "ok"

int main(int argc, char const *argv[])
{
    printf("HELLO WORLD!");
    return 0;
}
