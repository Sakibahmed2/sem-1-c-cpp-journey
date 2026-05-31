#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int mark;

    void input()
    {
        cin >> id >> name >> section >> mark;
    };
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student s[3];

        for (int i = 0; i < 3; i++)
        {
            s[i].input();
        }

        Student best = s[0];

        for (int i = 1; i < 3; i++)
        {
            if (s[i].mark > best.mark)
            {
                best = s[i];
            }
            else if (s[i].mark == best.mark && s[i].id < best.id)
            {
                best = s[i];
            }
        }

        cout << best.id << " " << best.name << " " << best.section << " " << best.mark << endl;
    }

    return 0;
}