#include <stdio.h>
#include <string.h>

// You will be given a string S as input contains only small English alphabets. You need to tell the number of consonants in it. The string will not contain any spaces.

// Input ---> thefoxisgone
// Output ---> 7

int main()
{
    char str[100001];
    scanf("%s", str);

    int len = strlen(str);
    int countConsonants = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            countConsonants++;
        }
    }

    printf("%d", countConsonants);

    return 0;
}