#include <stdio.h>

// You will be given an integer array A of size N. You need to count the number of elements that are divided by 2 and number of elements that are divided by 3. If any number is divided by both 2 and 3, then consider it only for 2.

// Input ***
// 5
// 1 4 2 5 3

// Output ***
// 2 1

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    int divBy2 = 0;
    int divBy3 = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
        {
            divBy2++;
        }
        else if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            divBy2++;
        }
        else if (arr[i] % 3 == 0)
        {
            divBy3++;
        }
    }

    printf("%d %d", divBy2, divBy3);

    return 0;
}