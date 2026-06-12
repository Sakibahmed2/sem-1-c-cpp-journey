#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char sec;
    int id;
    int math_mark;
    int eng_mark;
};

bool cmp(Student l, Student r)
{
    int l_total = l.math_mark + l.eng_mark;
    int r_total = r.math_mark + r.eng_mark;

    if (l_total == r_total)
    {
        return l.id < r.id;
    }
    else
    {
        return l_total > r_total;
    }
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].sec >> arr[i].id >> arr[i].math_mark >> arr[i].eng_mark;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].sec << " " << arr[i].id << " " << arr[i].math_mark << " " << arr[i].eng_mark << endl;
    }

    return 0;
}