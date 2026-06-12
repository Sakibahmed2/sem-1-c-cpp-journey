#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, target;
        cin >> s >> target;
        size_t pos = 0;
        while ((pos = s.find(target)) != string::npos)
        {
            s.replace(pos, target.size(), "#");
        }

        cout << s << endl;
    }

    return 0;
}