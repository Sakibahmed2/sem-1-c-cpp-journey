#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (s == rev)
    {
        return true;
    }

    return false;
}

int main()
{
    string s;
    cin >> s;

    if (is_palindrome(s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}