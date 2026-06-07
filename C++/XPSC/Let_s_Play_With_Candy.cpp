#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long candy = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candy)
        {
            candy++;
        }
        else if (arr[i] > candy)
        {
            break;
        }
    }

    cout << candy << endl;

    return 0;
}