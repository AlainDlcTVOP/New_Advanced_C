#include <stdio.h>

int main(int argc, char const *argv[])
{

    size_t rows = 0;
    size_t columns = 0;
    int beans[rows][columns];
    printf("Enter the rows of elements you want to store:");
    scanf("%d", &rows);
    printf("Enter the columns of elements you want to store:");
    scanf("%d", &columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("# ", beans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
