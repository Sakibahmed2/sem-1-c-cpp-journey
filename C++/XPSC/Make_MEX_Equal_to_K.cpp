#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;

    int arr[n];
    int freq[1001] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]] = 1;
    }
    cin >> k;

    if (freq[k] == 1)
    {
        cout << -1 << endl;
        return 0;
    }

    int operation = 0;

    for (int i = 0; i < k; i++)
    {
        if (freq[i] == 0)
        {
            operation++;
        }
    }
    cout << operation << endl;

    return 0;
}