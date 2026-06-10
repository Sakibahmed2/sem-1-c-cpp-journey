#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string digits;
        cin >> digits;
        int len = digits.size();
        int first_sum = 0, last_sum = 0;
        for (int i = 0; i < 3; i++)
        {
            first_sum += digits[i] - '0';
            last_sum += digits[i + 3] - '0';
        }

        if (first_sum == last_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}