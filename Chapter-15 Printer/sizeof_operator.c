#include <stdio.h>

int main ()
{
    int a = 5;

    printf("Integer Bytes : %zu\n", sizeof(int));
    printf("Character Bytes : %zu\n", sizeof(char));
    printf("Float Bytes : %zu\n", sizeof(float));
    printf("Double Bytes : %zu\n", sizeof(double));
    printf("Long Integer Bytes : %zu\n", sizeof(long int));

    int array[10];

    printf("Integer Bytes of Array : %d\n", sizeof(array));
    printf("Size of Array : %d\n", sizeof(array) / sizeof(array[0]));

    return 0;
}