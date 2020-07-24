#include <stdio.h>
#include <math.h>

int convertBinaryToDecimal(long long n);
void main()
{
    long long n;
    int result = 0;

    printf("Enter binary number: \n");
    scanf("%lld", &n);

    result = convertBinaryToDecimal(n);
    printf("%lld in binary = %d in decimal", n, result);
}
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder = 0;
    while (n != 0)
    {
        remainder = n % 10;
        n = n / 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }

    return decimalNumber;
}