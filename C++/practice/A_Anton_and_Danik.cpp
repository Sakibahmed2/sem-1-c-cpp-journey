#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count_a = count(s.begin(), s.end(), 'A');
    int count_d = n - count_a;

    if (count_a > count_d)
    {
        cout << "Anton" << endl;
    }
    else if (count_d > count_a)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}