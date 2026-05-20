#include <stdio.h>

void print_1_to_n(int n, int count)
{
    printf("%d\n", count);
    if (n == count)
    {
        return;
    }
    count++;

    print_1_to_n(n, count);
}

int main()
{
    int n;
    scanf("%d", &n);
    print_1_to_n(n, 1);

    return 0;
}