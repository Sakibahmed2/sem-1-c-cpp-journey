#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);
    printf("%p\n", &arr[3]);
    printf("%p\n", &arr[4]);
    return 0;
}