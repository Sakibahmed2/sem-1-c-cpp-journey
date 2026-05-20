#include <stdio.h>

int main()
{
    char n[20]; // enough for 10^18
    scanf("%s", n);

    int count = 0;

    // Step 1: count 4 and 7
    for (int i = 0; n[i] != '\0'; i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            count++;
        }
    }

    // Step 2: check if count is lucky
    if (count == 0)
    {
        printf("NO");
        return 0;
    }

    int temp = count;
    int isLucky = 1;

    while (temp > 0)
    {
        int d = temp % 10;

        if (d != 4 && d != 7)
        {
            isLucky = 0;
            break;
        }

        temp /= 10;
    }

    if (isLucky)
        printf("YES");
    else
        printf("NO");

    return 0;
}