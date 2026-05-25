#include <bits/stdc++.h>
using namespace std;

int *p;
void func()
{
    int *x = new int;
    *x = 10;
    p = x;
    cout << "Func ->" << *p << endl;

    return;
}

int main()
{
    func();
    cout << "Main ->" << *p << endl;

    return 0;
}