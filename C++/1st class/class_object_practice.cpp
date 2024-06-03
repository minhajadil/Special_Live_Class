#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    char name[100];
    int roll;
    char section;
    int math_marks;
};

int main()
{

    Student a, b, c;

    cin >> a.name >> a.roll >> a.section >> a.math_marks;
    cin >> b.name >> b.roll >> b.section >> b.math_marks;
    cin >> c.name >> c.roll >> c.section >> c.math_marks;

    if (a.math_marks > b.math_marks && a.math_marks > c.math_marks)
    {
        cout << a.math_marks << endl;
        cout << a.name << endl;
    }
    else if (b.math_marks > a.math_marks && b.math_marks > c.math_marks)
    {
        cout << b.math_marks << endl;
        cout << b.name << endl;
    }
    else
    {
        cout << c.math_marks << endl;
        cout << c.name << endl;
    }
}