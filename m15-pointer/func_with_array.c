#include <stdio.h>

void func(int arr[])
{
    arr[1] = 200;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    func(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}