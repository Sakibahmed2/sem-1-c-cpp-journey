#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    Student rahim(778088, 12, 2.50);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa;

    return 0;
}