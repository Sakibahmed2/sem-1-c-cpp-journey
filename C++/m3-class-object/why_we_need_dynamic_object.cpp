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

Student *fun()
{
    Student rahim(778088, 12, 2.70);
    Student *p = &rahim;
    return p;
}

int main()
{
    Student *p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa;

    return 0;
}