#include <stdio.h>

int main()
{

    int n = 10;

    for (int i = 0; i <= n; i++)
    {
        printf("*");
        for (int j = 1; j <= n - 1; j++)
        {
            printf("*\n");
        }
    }

    return 0;
}