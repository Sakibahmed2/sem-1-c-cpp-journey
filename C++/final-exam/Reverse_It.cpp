#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int t;
    cin >> t;
    Student arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }

    int start = 0, end = t - 1;

    while (start < end)
    {
        char temp = arr[start].s;
        arr[start].s = arr[end].s;
        arr[end].s = temp;
        start++;
        end--;
    }

    for (int i = 0; i < t; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl;
    }

    return 0;
}