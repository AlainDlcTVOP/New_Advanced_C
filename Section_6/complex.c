#include <stdio.h>
#include <complex.h>

int main(int argc, char const *argv[])
{
#ifdef __STDC_NO_COMPLEX__

#else

    double complex cx = 1.0 + 3.0 * I;
    double complex cy = 1.0 - 4.0 * I;

    printf("complex nr:\n");
    printf("Starting values: cx %.2f+.2fi cy = %2.f+.2fi\n", creal(cx), cimag(cx), creal(cy), cimag(cy));
#endif
    return 0;
}
