#include <stdio.h>

void print_in_recursion(int n, int count)
{
    if (count == n)
    {
        return;
    }

    printf("I love Recursion\n");
    count++;
    print_in_recursion(n, count);
}

int main()
{
    int n;
    scanf("%d", &n);
    print_in_recursion(n, 0);
    return 0;
}