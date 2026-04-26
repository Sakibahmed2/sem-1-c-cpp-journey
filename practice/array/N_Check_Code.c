#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    char str[a + b + 2];
    scanf("%s", str);

    int valid = 1;
    for (int i = 0; i < a + b + 1; i++)
    {
        if (i == a)
        {
            if (str[i] != '-')
            {
                valid = 0;
                break;
            }
        }
        else
        {
            if (str[i] < '0' || str[i] > '9')
            {
                valid = 0;
                break;
            }
        }
    }

    if (valid)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}