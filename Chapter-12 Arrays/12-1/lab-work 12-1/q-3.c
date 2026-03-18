#include <stdio.h>

 main ()
{
    int size;

    printf("Enter Array Size :");
    scanf("%d", &size);

    int a[size], b[size];
    int sum[size];

    printf("\n\nEnter array A's elements :\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }


    printf("\n\nEnter array B's elements :\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum[i] = a[i] + b[i];
    }

    printf("\n\n Array C is : \n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", sum[i]);
    }
    
}
