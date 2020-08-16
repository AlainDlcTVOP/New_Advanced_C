#include <stdio.h>
// turn bits on
int main()
{
    int flag = 15;  // 0000 1111
    int mask = 182; // 1011 0110

    flag = flag | mask;    // 1011 1111
    flag = flag & ~(mask); // 0000 1001
    flag = flag ^ mask;    // 1011 1001

  
    return 0;
}
