#include <stdio.h>
#include <malloc.h>

struct myArray
{
    int memb;
    int array[];
};

int main(int argc, char const *argv[])
{
    int size = 0;

    struct myArray *ptr;

    ptr = malloc(sizeof(struct myArray) + size * sizeof(int));

    ptr[size];

    printf("Enter the size of an array\n", &size);
    scanf("%d", &size);

    printf("----------------------------\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("dummy data printed %d\n", ptr[i]);
    }

    return 0;
}
