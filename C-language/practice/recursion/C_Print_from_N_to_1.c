#include <stdio.h>

void print_from_n_to_1(int n)
{
    printf("%d", n);
    if (n == 1)
    {
        return;
    }
    printf(" ");
    n--;
    print_from_n_to_1(n);
}

int main()
{
    int n;
    scanf("%d", &n);
    print_from_n_to_1(n);
    return 0;
}