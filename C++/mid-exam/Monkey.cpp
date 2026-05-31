#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while (getline(cin, str))
    {
        string ans;

        for (char c : str)
        {
            if (c != ' ')
            {
                ans += c;
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}