#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int min_val = INT_MAX;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x < min_val)
        {
            min_val = x;
            count = 1;
        }
        else if (x == min_val)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}