#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long k;
    cin >> n >> k;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    if (arr[0] > k)
    {
        cout << -1 << endl;
        return 0;
    }

    long long max_afford = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            max_afford = max(max_afford, arr[i]);
        }
    }

    cout << max_afford << endl;

    return 0;
}