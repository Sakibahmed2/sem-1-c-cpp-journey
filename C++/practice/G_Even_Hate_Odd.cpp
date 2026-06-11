#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        int even_count = 0, odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }

        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << abs(even_count - odd_count) / 2 << endl;
        }
    }
    return 0;
}