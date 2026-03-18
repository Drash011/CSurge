#include <stdio.h>

main ()
{
    int size1, size2;

    printf("Enter size 1st elements :");
    scanf("%d", &size1);

    printf("Enter size 2nd elements :");
    scanf("%d", &size2);
    
    int a[size1], b[size2];
    int merge[size1 + size2];

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

    for (int i = 0; i < size1; i++)
        merge[i] = a[i];

    for (int i = 0; i < size2; i++)
        merge[i + size1] = b[i];


    printf("\n\nMerge Output\n\n");
    for (int i = 0; i < size1 + size2; i++)
        printf("%d\t", merge[i]);

}