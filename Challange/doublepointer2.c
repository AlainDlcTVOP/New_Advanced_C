#include <stdio.h>
#include <malloc.h>

void allocateMemory(int **ptr);

int main()
{
    int *ptr = NULL;

    allocateMemory(&ptr);
    *ptr = 20;
    printf("%d\n", *ptr);

    free(ptr);

    return 0;
}
void allocateMemory(int **ptr)
{
    *ptr = (int *)malloc(sizeof(int));
}