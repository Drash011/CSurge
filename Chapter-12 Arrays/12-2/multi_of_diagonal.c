#include <stdio.h>

main ()
{
    int row, col;

    printf("Enter row size :");
    scanf("%d", &row);
    
    printf("Enter column size :");
    scanf("%d", &col);

    int a [row] [col];
    int multi = 1;

    printf("\n\nEnter array's elements :\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
                printf("%d", a[i][j]);
            
            else
                printf("  ");
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                multi *= a[i][j];
            }
        }
    }
    
    printf("\n\n");
    printf("Multipication of diagonal elements of an Array : %d", multi);
}