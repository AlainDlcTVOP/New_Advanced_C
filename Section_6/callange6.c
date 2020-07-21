#include <stdio.h>

int main()
{
    int sum = 0;
    int size = 0;
    printf("enter size of array\n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements in the array\n", &size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("\n Sum of all elements array %d", sum);

    return 0;
}