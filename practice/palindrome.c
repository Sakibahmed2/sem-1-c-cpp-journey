#include <stdbool.h>
#include <stdio.h>

bool isPalindrome(int x)
{
    double rev = 0, rem, original = x;

    while (x > 0)
    {
        rem = x % 10;
        rev = rev * 10 + rem;

        x = x / 10;
    }

    if (rev == original)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int x = 123;
    int result = isPalindrome(x);

    printf("%d", result);

    return 0;
}
