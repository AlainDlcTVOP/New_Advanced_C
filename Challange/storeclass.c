#include <stdio.h>
/* 
int variabel*/
static double d = 6.5;
float f = 5.5f;

int main()
{
    {
        int a = 5;
    }

    static float sf = 44.4f;
    register int reg = 2;

    return 0;
}
static void myfunc()
{
    printf("hej");
}
