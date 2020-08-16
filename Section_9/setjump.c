#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>
/* setjmp can be used like try
longjmp can be used like throw*/

jmp_buf buf;

void myFunction();
int main()
{
    /* int i = setjmp(buf);
    printf("i=%d\n", i);

    if (i != 0)
        exit(0);
    longjmp(buf, 42);
    printf("Does this line get printed?\n"); */

    if (setjmp(buf))
        printf("back in main");
    else
    {
        printf("first time through\n");
        myFunction();
    }
    return 0;
}
void myFunction()
{
    printf("in myFunction()\n");
    longjmp(buf, 1);
    // NOT REACHED
    printf("You will never see this, because I longjmp'd");
}
