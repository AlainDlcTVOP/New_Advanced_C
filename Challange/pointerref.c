#include <stdio.h>
#include <malloc.h>

void allocatMemory(int **ptr)
{
    *ptr = (int *)malloc(sizeof(int));
}
int main()
{
    int *ptr = NULL;
    allocatMemory(&ptr);
    *ptr = 20;
    printf("%d\n", *ptr);

    free(ptr);

    return 0;
}
