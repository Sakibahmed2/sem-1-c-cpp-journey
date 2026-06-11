#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;

        string result;
        for (int i = 0; i < n; i++)
        {
            result += c;
            result += " ";
        }

        cout << result << endl;
    }

    return 0;
}