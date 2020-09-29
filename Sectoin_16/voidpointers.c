#include <stdio.h>
#include <string.h>

int main()
{
    void *pvData = NULL;
    int *iData = NULL;
    float *fData = NULL;
    char *cData = NULL;

    printf("size of void pointer = %d\n", sizeof(pvData));
    printf("size of int pointer = %d\n", sizeof(iData));
    printf("size of float pointer = %d\n", sizeof(fData));
    printf("size of char pointer = %d\n", sizeof(cData));
    return 0;
}
