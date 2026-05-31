#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        bool founded = false;
        for (int i = 0; i < n - 2; i++)
        {
            int start = i + 1;
            int end = n - 1;

            while (start < end)
            {
                int sum = arr[i] + arr[start] + arr[end];

                if (sum == s)
                {
                    founded = true;
                    break;
                }
                else if (sum < s)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }

        founded ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}