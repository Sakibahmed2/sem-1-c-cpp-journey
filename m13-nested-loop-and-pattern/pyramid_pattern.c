#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 2)
    {

        // Printing space
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }

        // Printing star
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}