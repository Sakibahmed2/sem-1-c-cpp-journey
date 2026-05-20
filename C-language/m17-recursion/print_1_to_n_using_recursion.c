#include <stdio.h>

void print1ToN(int n, int num)
{

    printf("%d\n", num);
    if (n == num)
    {
        return;
    }
    num++;
    print1ToN(n, num);
}

int main()
{
    int n;
    int num = 1;
    scanf("%d", &n);
    print1ToN(n, num);
    return 0;
}