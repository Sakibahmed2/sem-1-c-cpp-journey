#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Static array 
    // int arr[5];  

    // Dynamic array
    int * arr = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}