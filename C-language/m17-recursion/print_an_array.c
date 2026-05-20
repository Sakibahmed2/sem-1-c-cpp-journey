#include <stdio.h>

void print_array(int arr[], int n, int i)
{

    if (i == n)
    {
        return;
    }
    printf("%d\n", arr[i]);
    i++;
    print_array(arr, n, i);
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
    print_array(arr, n, 0);
    return 0;
}