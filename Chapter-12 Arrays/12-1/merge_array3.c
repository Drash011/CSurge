#include <stdio.h>

main ()
{
    int size1, size2, size3;

    printf("Enter size 1st elements :");
    scanf("%d", &size1);

    printf("Enter size 2nd elements :");
    scanf("%d", &size2);
    
    printf("Enter size 3rd elements :");
    scanf("%d", &size3);
    
    int a[size1], b[size2], c[size3];
    int merge[size1 + size2 + size3];

    printf("\n\nArray 01 Input\n\n");
    for (int i = 0; i < size1; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\nArray 02 Input\n\n");
    for (int i = 0; i < size2; i++)
    {
        printf("Enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    printf("\n\nArray 03 Input\n\n");
    for (int i = 0; i < size3; i++)
    {
        printf("Enter c[%d] : ", i);
        scanf("%d", &c[i]);
    }

    for (int i = 0; i < size1; i++)
        merge[i] = a[i];

    for (int i = 0; i < size2; i++)
        merge[i + size1] = b[i];
    
    for (int i = 0; i < size3; i++)
        merge[i + size1 + size2] = c[i];


    printf("\n\nMerge Output\n\n");
    for (int i = 0; i < size1 + size2 + size3; i++)
        printf("%d\t", merge[i]);

}