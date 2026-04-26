#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str[10001];
        scanf("%s", str);

        int len = strlen(str);

        int caCount = 0;
        int smCount = 0;
        int digitCount = 0;

        for (int j = 0; j <= len; j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                caCount++;
            }
            else if (str[j] >= 'a' && str[j] <= 'z')
            {
                smCount++;
            }
            else if (str[j] >= '0' && str[j] <= '9')
            {
                digitCount++;
            }
        }

        printf("%d %d %d\n", caCount, smCount, digitCount);
    }

    return 0;
}