#include <stdio.h>

int main(int argc, char const *argv[])
{
    size_t rows = 0;
    size_t columns = 0;

    printf("Enter the rows of elements you want to store:");
    scanf("%d", &rows);
    printf("Enter the columns of elements you want to store:");
    scanf("%d", &columns);

    float beans[rows][columns];

    return 0;
}
