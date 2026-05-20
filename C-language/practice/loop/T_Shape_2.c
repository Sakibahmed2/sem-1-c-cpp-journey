#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    for (int i = 0; i < n; i++)
    {

        // For space
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }

        // For star
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        star = star + 2;

        printf("\n");
    }

    return 0;
}