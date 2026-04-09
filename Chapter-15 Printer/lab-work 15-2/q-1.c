#include <stdio.h>

int main()
{
    int size;

    printf("Enter the array's size :");
    scanf("%d", &size);

    int array[size];
    int *ptr = array;

    printf("Enter array elements :\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] :", i);
        scanf("%d", ptr + i);
    }

    printf("\nReversed array elements :\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}