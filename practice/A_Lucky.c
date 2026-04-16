#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int nums;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &nums);

        int first = nums / 1000;
        int last = nums % 1000;
        int firstSum = 0;
        int lastSum = 0;

        while (first != 0 || last != 0)
        {
            firstSum = firstSum + first % 10;
            lastSum = lastSum + last % 10;

            first /= 10;
            last /= 10;
        }

        if (firstSum == lastSum)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}