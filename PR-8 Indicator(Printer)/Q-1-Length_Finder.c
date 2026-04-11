#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter any string : ");
    scanf("%[^\n]", str);

    ptr = str;

    for (; *ptr != '\0'; ptr++)
    {
        length++;
    }

    printf("The Length of a string is : %d\n", length);

    return 0;
}