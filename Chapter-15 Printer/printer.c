#include <stdio.h>

int main ()
{
    int n = 89;
    int *ptr;
    ptr = &n;

    printf("N\t: %d\n", n);
    printf("Ptr\t: %d\n", *ptr);

    printf("N Address : %u\n", &n);
    printf("Ptr Address : %u\n", ptr);
    printf("Ptr Address :%p\n", ptr);
    printf("Ptr Address :%x\n\n", ptr);
    
    n = 100;

    printf("N\t: %d\n", n);
    printf("Ptr\t: %d\n\n", *ptr);

    *ptr = 567;

    printf("N\t: %d\n", n);
    printf("Ptr\t: %d\n\n", *ptr);

    return 0;
}