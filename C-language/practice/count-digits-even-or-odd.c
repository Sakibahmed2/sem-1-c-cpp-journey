#include <stdio.h>

int main()
{

    int digits = 123213;
    int count = 0;
    while (digits > 0)
    {
        count = count + 1;

        digits = digits / 10;
    }

    printf("%d", count);

    return 0;
}