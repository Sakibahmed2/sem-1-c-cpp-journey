#include <stdio.h>

void func(int x)
{
    x = 20;
    printf("Func x er address: %p", &x);
}

int main()
{
    int x = 10;

    func(x);
    printf("%d\n", x);
    printf("Main x er address: %p", &x);

    return 0;
}