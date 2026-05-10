#include <stdio.h>

void print_even_indices(int arr[], int n)
{
    if (n < 0)
    {
        return;
    }
    if (n % 2 == 0)
    {
        printf("%d ", arr[n]);
    }

    print_even_indices(arr, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    print_even_indices(arr, n - 1);
    return 0;
}