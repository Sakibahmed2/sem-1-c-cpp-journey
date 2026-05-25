#include <stdio.h>
#include <string.h>

int main()
{
    char s1[2005], s2[2005];

    scanf("%s", s1);
    scanf("%s", s2);

    int start, end;
    scanf("%d %d", &start, &end);

    int len = strlen(s1);

    for (int i = start; i <= end; i++)
    {
        s1[len] = s2[i];
        len++;
    }

    s1[len] = '\0';

    printf("%s", s1);

    return 0;
}