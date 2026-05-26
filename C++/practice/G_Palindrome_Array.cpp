#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int is_palindrome = 1;

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            is_palindrome = 0;
        }

        start++;
        end--;
    }

    if (is_palindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}