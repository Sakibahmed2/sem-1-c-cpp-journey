#include <stdio.h>

void hello()
{
    printf("Hello\n");
    // Never call it like this
    // hello();
}

int main()
{
    printf("Hi\n");
    hello();
    return 0;
}