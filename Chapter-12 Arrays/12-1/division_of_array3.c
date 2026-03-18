#include <stdio.h>

main ()
{
    int size;

    printf("Enter number elements :");
    scanf("%d", &size);

    int a[size], b[size], c[size];
    int devision[size];

    printf("\n\nArray 01 Input\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }


    printf("\n\nArray 02 Input\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }


    printf("\n\nArray 03 Input\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter c[%d] :", i);
        scanf("%d", &c[i]);
    }
    

    for (int i = 0; i < size; i++)
    {
        devision[i] = a[i] / b[i] / c[i];
    }

    printf("\n\n Array 01, Array 02 and Array 03 Devision \n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", devision[i]);
    }
    
    
}