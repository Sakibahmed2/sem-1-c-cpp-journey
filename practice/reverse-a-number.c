#include <stdio.h>

int main()
{

    int n = 1232;
    int reminder = 0;
    while (n > 0)
    {
        int last = n % 10;
        reminder = reminder * 10 + last;

        n = n / 10;
    }

    printf("%d", reminder);

    return 0;
}