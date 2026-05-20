#include <stdio.h>

int main()
{
    char str[101];
    scanf("%s", &str);

    int uppercase_count = 0, lowercase_count = 0;

    // Count uppercase and lowercase
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            uppercase_count++;
        }
        else
        {
            lowercase_count++;
        }
    }

    // Convert based on count
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (uppercase_count > lowercase_count)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
        else
        {

            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }
    }

    printf("%s", str);

    return 0;
}