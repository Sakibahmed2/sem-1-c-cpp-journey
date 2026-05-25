#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
};

int main()
{
    Student rahim(778088, 12, 2.70);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa;

    return 0;
}