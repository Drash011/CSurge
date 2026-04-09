#include <stdio.h>

int main()
{

    int size;

    printf("Enter the array's size :");
    scanf("%d", &size);

    int array[size];
    int *ptr = array;

    printf("Enter array's elements :\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", ptr + i);
    }

    printf("\nAqure of each element :\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}