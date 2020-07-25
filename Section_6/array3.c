#include <stdio.h>

int sum3d(int rows, int cols, int array[rows][cols]);

int main()
{
    sum3d(2, 3, 2);

    return 0;
}
int sum3d(int rows, int cols, int array[rows][cols])
{
    int r;
    int c;
    int tot = 0;

    for (r = 0; r < rows; r++)
        for (c = 0; c < cols; c++)
            tot += array[r][c];

    return tot;
}
