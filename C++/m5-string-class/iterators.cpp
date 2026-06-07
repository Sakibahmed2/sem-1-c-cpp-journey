#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";

    // cout << *s.begin() << endl;
    // cout << *(s.end() - 1) << endl;

    // for(string:: iterator it = s.begin(); it < s.end(); it++)
    for (auto it = s.begin(); it < s.end(); it++) // same c++ after 11 version
    {
        cout << *it << endl;
    }

    return 0;
}