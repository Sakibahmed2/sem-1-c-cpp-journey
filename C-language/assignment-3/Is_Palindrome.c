#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int isPalindrome = 1;
    int len = strlen(str) - 1;

    for (int i = 0; i <= len; i++)
    {
        char first = str[i];
        char last = str[len - i];

        if (first != last)
        {
            isPalindrome = 0;
        }
    }
    return isPalindrome;
}

int main()
{
    char str[1001];
    scanf("%s", str);

    int ans = is_palindrome(str);
    if (ans)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}