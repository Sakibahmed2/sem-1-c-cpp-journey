#include <stdio.h>

void print_digit(long long int num)
{
    int arr[11];
    int count = 0;

    if (num == 0)
    {
        printf("0\n");
        return;
    }

    while (num > 0)
    {
        arr[count++] = num % 10;
        num = num / 10;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void print_digit_using_recursion(int n)
{
    if (n == 0)
        return;

    long long int num;
    scanf("%lld", &num);

    print_digit(num);

    print_digit_using_recursion(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    print_digit_using_recursion(n);

    return 0;
}