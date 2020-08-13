#include <stdio.h>

union student
{
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};

int main()
{

    union student grade1;
    union student grade2;

    grade1.letterGrade = 'B';
    grade1.roundedGrade = 87;
    grade1.exactGrade = 86.50;
    puts("Union grade1 example");
    printf("Lettergrade :%c \n", grade1.letterGrade);
    printf("RoundedGrade :%d \n", grade1.roundedGrade);
    printf("ExactGrade :%f \n", grade1.exactGrade);

    puts("------------------------------------------");

    puts("Union grade2 example");

    grade2.letterGrade = 'A';
    printf("Lettergrade :%c \n", grade2.letterGrade);
    grade2.roundedGrade = 100;
    printf("RoundedGrade :%d \n", grade2.roundedGrade);
    grade2.exactGrade = 99.500000;
    printf("ExactGrade :%f \n", grade2.exactGrade);

    return 0;
}
