#include <stdio.h>

int main()
{
    char n[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &n[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%c", n[i]);
    }

    return 0;
}