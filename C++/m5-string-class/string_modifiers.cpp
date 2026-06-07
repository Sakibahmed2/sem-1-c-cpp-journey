#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello World";

    string s2 = " World";
    // s += s2;
    // s.append(s2);
    s.push_back('S');
    s.pop_back();
    // s = "Gello";
    // s.assign("Mello");
    // s.erase(5);
    // s.replace(6, 5, "Bangladesh");
    s.insert(5, " Hi");

    cout << s << endl;

    return 0;
}