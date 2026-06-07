#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    // s.clear(); // its clear the string
    s.resize(10, 'x');
    cout << s.size() << endl;
    cout << s.capacity() << endl;
    cout << s.empty() << endl; // if empty 1 if not 0
    cout << s << endl;

    return 0;
}