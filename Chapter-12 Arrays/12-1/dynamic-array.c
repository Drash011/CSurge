#include <stdio.h>

main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("\n\nArray Input\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element : ");
        scanf("%d", &array[i]);
    }

    printf("\n\nArray Output\n\n");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
}