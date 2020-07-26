#include <stdio.h>

long long convertDecimalToBinary(int n);

int main(int argc, char const *argv[])
{
    static int a, b;
    static int result = 0;
    signed int tildeA = 0;
    signed int tildeB = 0;
    unsigned int shift = 0;

    printf("please enter Two integer \n");
    scanf("%d", &a);
    printf("please enter integer \n");
    scanf("%d", &b);
    printf("you entered %d\n", a);
    printf("you entered %d\n", b);

    tildeA = ~(a);
    tildeB = ~(b);
    printf("One's complement first  ~ %d\n", tildeA);
    printf("One's complement secound ~ %d\n", tildeB);

    result = a & b;

    printf("AND operant & %d\n", convertDecimalToBinary(result));

    result = a | b;

    printf("OR operant | %d\n", convertDecimalToBinary(result));

    result = a ^= b;

    printf("XOR operant ^ %d\n", convertDecimalToBinary(result));

    shift = a << b;

    printf("SHIFT LEFT operant << %d\n", convertDecimalToBinary(shift));

    shift = a >> b;

    printf("SHIFT RIGHT >> %d\n", convertDecimalToBinary(shift));

    return 0;
}

long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1;

    while (n != 0)
    {
        remainder = n % 2;
        n = n / 2;
        binaryNumber += remainder * i;
        i = i * 10;
    }

    return binaryNumber;
}