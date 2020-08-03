#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0, d = 0;

    printf("First integer\n");
    scanf("%d", &n);
    printf("Secound integer\n");
    scanf("%d", &d);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    printf("%d / %d = %d\n", n, d, n / d);
    printf("%d - %d = %d\n", n, d, n - d);
    printf("%d + %d = %d\n", n, d, n + d);

    return 0;
}
