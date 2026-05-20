#include <stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);

    int freq[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i] - 'a'] = 1;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 1)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}