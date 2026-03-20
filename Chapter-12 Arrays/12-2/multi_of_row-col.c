#include <stdio.h>

main()
{
    int row, col;

    printf("Enter the array's row size :");
    scanf("%d", &row);

    printf("Enter the array's column size :");
    scanf("%d", &col);

    int a[row][col];
    printf("\n\nEnter array's elements :\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    int row1, col1, multi = 1;
    printf("\n\nOutput :\n\n");

    printf("Enter row number :");
    scanf("%d", &row1);

    printf("\nElements of row %d :", row1);
    for (int j = 0; j < col; j++)
    {
        printf("%d  ", a[row1][j]);
        multi *= a[row1][j];
    }
    printf("\n");
    printf("The Multipication of a row %d : %d\n", row1, multi);

    printf("\n\n");
    printf("Enter column number :");
    scanf("%d", &col1);

    multi = 1;

    printf("\nElements of column %d :", col1);
    for (int i = 0; i < row; i++)
    {
        printf("%d  ", a[i][col1]);
        multi *= a[i][col1];
    }
    printf("\n");
    printf("The Multipication of a column %d : %d\n", col1, multi);
}
