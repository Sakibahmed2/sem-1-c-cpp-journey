#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str[101];
        scanf("%s", str);

        int len = strlen(str);

        if (len > 10)
        {
            char first = str[0];
            char last = str[len - 1];

            printf("%c%d%c\n", first, len - 2, last);
        }
        else
        {

            printf("%s\n", str);
        }
    }

    return 0;
}