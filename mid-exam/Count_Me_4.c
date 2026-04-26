#include <stdio.h>

int main()
{
    char str[10001];
    scanf("%s", str);

    int freq[26] = {0};

    // count frequency
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i] - 'a']++;
    }

    // print result
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}