#include <stdio.h>

int main()
{
    int x = 11;
    printf("%d\n", x);
    printf("%p\n", &x);

    int *ptr;
    ptr = &x;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);

    // Dereferencing pointer
    printf("%d\n", *ptr);
    *ptr = 22;
    printf("%d\n", x);
    printf("%d\n", *ptr);

    return 0;
}