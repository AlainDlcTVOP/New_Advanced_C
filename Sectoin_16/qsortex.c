#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int key;
    struct other_data;
} record;
int record_compare(void const *a, void const *b)
{
    return (((record *)a)->key - ((record *)b)->key);
}

int main()
{

    return 0;
}
