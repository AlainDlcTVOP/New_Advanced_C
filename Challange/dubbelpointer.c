#include <stdio.h>

int main()
{
    int num = 123;
    int *singelPointer = NULL;
    int **doubbelPointer = NULL;

    singelPointer = &num;
    doubbelPointer = &singelPointer;
    /* Possible ways to find value of variable num*/
    printf("\n value of num is: %d", num);
    printf("\n value of num using singlePointer is %d", *singelPointer);
    printf("\n value of num using dubbelPointer is %d\n", **doubbelPointer);
    puts("\n---------------------------------------------\n");
    /* Possible ways to find adress of variable num*/
    printf("\n adress of num is: %p", &num);
    printf("\n adress of num using singlePointer is %p", singelPointer);
    printf("\n adress of num using dubbelPointer is %p", *doubbelPointer);
    puts("\n---------------------------------------------\n");
    /* Find value of pointer*/
    printf("\n Value of Pointer singelPOinter is : %u", singelPointer);
    printf("\n Value of Pointer dubbelPointer is : %u", *doubbelPointer);
    puts("\n---------------------------------------------\n");
    /* Adress  of pointer*/
    printf("\n Adress of Pointer singelPOinter is : %p", &singelPointer);
    printf("\n Adress of Pointer dubbelPointer is : %p", doubbelPointer);
    puts("\n---------------------------------------------\n");
    /* Adress  of pointer*/
    printf("\n Adress of Pointer singelPOinter is : %p", singelPointer);
    printf("\n Adress of Pointer dubbelPointer is : %p", &doubbelPointer);
    return 0;
}
