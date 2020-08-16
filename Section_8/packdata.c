#include <stdio.h>

int main()
{
    int num = 0, position,
        newNum,
        bitStatus;
    printf("enter a number\n");
    scanf("%d", &num);

    printf("enter the position to check and set (0-31) \n");
    scanf("%d", &position);

    /* Right shift num , n times and perform bitwase AND with 1*/
    bitStatus = (num >> position) & 1;
    printf("The %d bit is set to %d\n ", position, bitStatus);

    /* Left shift 1, n times peform bitwise OR wit num */
    newNum = (1 << position) | num;
    printf("\nBit set succesfully \n\n");

    printf("Number before setting %d bit: %d (int decimal)\n", position, num);
    printf("Number after setting %d bit: %d (int decimal)\n", position, newNum);
    return 0;
}
