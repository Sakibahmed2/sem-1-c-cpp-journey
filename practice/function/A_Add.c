#include <stdio.h>

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = add(a, b);
    printf("%d", ans);

    return 0;
}