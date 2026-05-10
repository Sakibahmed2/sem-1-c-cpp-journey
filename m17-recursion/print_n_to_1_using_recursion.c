#include <stdio.h>

void print_n_to_1(int n)
{
    printf("%d\n", n);
    if (n == 1)
    {
        return;
    }
    print_n_to_1(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    print_n_to_1(n);
    return 0;
}