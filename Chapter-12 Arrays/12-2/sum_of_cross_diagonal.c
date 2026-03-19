#include <stdio.h>

main()
{
    int row, col;

    printf("Enter row size :");
    scanf("%d", &row);

    printf("Enter column size :");
    scanf("%d", &col);

    int a[row][col];
    int sum = 0;

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
            if (i == j || i + j == row - 1)
                printf("%d ", a[i][j]);

            else
                printf("  ");
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j || i + j == row - 1)
            {
                sum += a[i][j];
            }
        }
    }

    printf("\n\n");
    printf("Sum of diagonal elements of an Array : %d", sum);
}