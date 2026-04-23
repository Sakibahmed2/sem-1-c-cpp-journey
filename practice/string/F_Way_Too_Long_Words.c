#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[n][101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int len = strlen(str[i]);
        if (len > 10)
        {
            char first, last;
            first = str[i][0];
            last = str[i][len - 1];
            printf("%c%d%c\n", first, len -2, last);
        }else{
            printf("%s\n", str[i]);
        }
    }

    return 0;
}