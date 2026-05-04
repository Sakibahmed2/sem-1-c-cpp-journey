#include <stdio.h>

void sum(int num1, int num2)
{
    int ans = num1 + num2;
    printf("%d", ans);
}
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    sum(n1, n2);

    return 0;
}
