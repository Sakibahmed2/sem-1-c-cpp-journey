#include <stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);

    char freq[202];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            char temp = str[i] + 32;
            str[i] = temp;
        }

        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y')
        {

            freq[j++] = '.';
            freq[j++] = str[i];
        }
    }

    freq[j] = '\0';

    printf("%s", freq);
    return 0;
}