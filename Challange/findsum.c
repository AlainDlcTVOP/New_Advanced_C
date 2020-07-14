#include <stdio.h>

/* write a c program thet finds the sum of various numbers
You cannot pass any varable representing the running totol to the sum() function*/

int sum(int num);
int main(int argc, char const *argv[])
{
    printf("%d \n", sum(25));
    printf("%d \n", sum(15));
    printf("%d \n", sum(30));

    return 0;
}
int sum(int num)
{
    static int add = 0;
    add += num;

    return add;
}
