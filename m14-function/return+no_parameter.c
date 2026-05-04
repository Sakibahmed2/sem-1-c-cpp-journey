#include <stdio.h>

int sum()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int ans = n1 + n2;
    return ans;
}
int main()
{

    int res = sum();
    printf("%d", res);

    return 0;
}
