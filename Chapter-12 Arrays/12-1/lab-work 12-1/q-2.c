#include <stdio.h>

main()
{
    int size;
    int sum = 0;

    printf("Enter number of elements : ");
    scanf("%d", &size);

    int array[size];

    printf("\n\nArray Input\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element : ");
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }

    printf("\n\nArray Output\n\n");
    for (int i = 0; i < size; i++)
        printf("%d\t", array[i]);


    printf("\n\n");
    printf("Array Sum\t: %d\n", sum);
    printf("Array AVG\t: %.2f", (float)sum / size);
}