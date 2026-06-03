#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    int freq[n] = {0};

    int start = 0;
    int end = n - 1;
    int idx = 0;
    while (start <= end)
    {
        freq[idx++] = arr[start++];

        if (start <= end)
        {
            freq[idx++] = arr[end--];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << freq[i] << " ";
    }

    return 0;
}