#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string s;
    // cin >> s;
    // cin.getline(cin, 100) // char s[100]
    cin.ignore(); // if it have enter before string use it
    getline(cin, s);

    cout << x << endl;
    cout << s << endl;
    return 0;
}