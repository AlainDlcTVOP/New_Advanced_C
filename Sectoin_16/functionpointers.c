#include <stdio.h>

int somedisplay();
int main()
{
    int (*func_ptr)();

    func_ptr = somedisplay;

    printf("\nAddress of function somedisplay is : %p\n", func_ptr);

    (*func_ptr)(); // invoke the function
    return 0;
}
int somedisplay()
{
    printf("\n Display some text--\n");
}