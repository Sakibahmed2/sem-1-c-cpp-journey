#include <stdio.h>

int main()
{

    char chr;
    scanf("%c", &chr);

    if (chr >= 'a' && chr <= 'z')
    {
        chr = chr - 32;
        printf("%c", chr);
    }
    else
    {
        chr = chr + 32;
        printf("%c", chr);
    }

    return 0;
}