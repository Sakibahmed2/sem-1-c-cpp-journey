#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void hello()
    {
        cout << "Hello " << name << endl;
    }
};

int main()
{
    Student sakib("Sakib ahmed", 22);
    sakib.hello();
    Student rakib("Rakib ahmed", 26);
    rakib.hello();

    return 0;
}