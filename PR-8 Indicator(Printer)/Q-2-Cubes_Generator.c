#include <stdio.h>

void cubeElements(int rows, int cols, int a[rows][cols])
{
    
    printf("\nCubes of all elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j] * a[i][j] * a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols];

    printf("\nEnter array elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cubeElements(rows, cols, a);

    return 0;
}