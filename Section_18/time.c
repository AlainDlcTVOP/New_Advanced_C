#include <stdio.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

int main(void)
{

    time_t time_ptr;
    time(&time_ptr);
    printf("Current date and time = %s", asctime(localtime(&time_ptr)));
    return 0;
}
