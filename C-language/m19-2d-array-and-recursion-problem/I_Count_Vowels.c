#include <stdio.h>
#include <string.h>

int countVowels(char str[], int i)
{
    if (str[i] == '\0')
    {
        return 0;
    }
    int cnt = countVowels(str, i + 1);

    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
        return cnt + 1;
    }
    else
    {
        return cnt;
    }
}

int main()
{
    char str[201];
    fgets(str, 201, stdin);
    int ans = countVowels(str, 0);

    printf("%d", ans);
    return 0;
}