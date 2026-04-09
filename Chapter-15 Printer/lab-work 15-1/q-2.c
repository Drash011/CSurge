#include <stdio.h>

int main ()
{
    int x, y;
    int *ptr1 = &x;
    int *ptr2 = &y;

    printf("Enter the balue of x :");
    scanf("%d", &x);

    printf("Enter the balue of y :");
    scanf("%d", &y);

    printf("\nBefore swapping :\n");
    printf("x : %d\n", x);
    printf("y : %d\n", y);

    int c = *ptr1;
    *ptr1 = *ptr2;  
    *ptr2 = c;

    printf("\nAfter swapping :\n");
    printf("x : %d\n", x);
    printf("y : %d\n", y);
    
    
    return 0;
}