#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // Print min
    cout << min(a, b) << endl;
    // cout << min({10, 20, 30, 40}) << endl;

    // Print max
    cout << max(a, b) << endl;
    // cout << max({20, 40, 560, 7}) << endl;

    // Swap two number
    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}