#include <stdio.h>

int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    int min = a;

    // Find max
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    // Find min
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }

    printf("%d %d", min, max);

    return 0;
}