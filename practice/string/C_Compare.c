#include <stdio.h>

int main()
{
    char a[21], b[21];
    scanf("%s %s", &a, &b);

    int compare = strcmp(a, b);

    if (compare == -1)
    {
        printf("%s", a);
    }
    else
    {
        printf("%s", b);
    }

    return 0;
}