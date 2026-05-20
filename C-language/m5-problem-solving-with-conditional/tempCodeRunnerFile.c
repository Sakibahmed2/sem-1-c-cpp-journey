#include <stdio.h>

int main()
{

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int res = (a * b) - (c * d);

    printf("Difference = %d", res);

    return 0;
}