#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[100] = {1, 2, 3, [3 ... 9] = 10, [10] = 80, 15, [70] = 50, [42] = 400};

    for (int i = 0; i < 20; i++)
    {
        printf("%d \t", numbers[i]);
    }

    printf("%d\n", numbers[70]);
    printf("%d", numbers[42]);

    return 0;
}
