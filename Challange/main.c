#include <stdio.h>

extern void dispaly(void);

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)
        dispaly();

    return 0;
}
