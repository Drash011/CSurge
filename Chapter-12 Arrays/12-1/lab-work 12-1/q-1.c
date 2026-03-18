#include <stdio.h>

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size];

    printf("\nEnter array elements:\n");

    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nLength of an Array: %d\n", size);

}
