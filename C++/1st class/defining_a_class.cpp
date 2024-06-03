#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    char name[100];
    int age;
    char section;
    int math_marks;
};

int main()
{

    Student Sadaf, Shanto, Kapil;

    cin.getline(Sadaf.name, 1000);
    cout << Sadaf.name << endl;
    Sadaf.age = 20;
    Sadaf.section = 'A';
    Sadaf.math_marks = 90;

    cout << Sadaf.math_marks << endl;

    Shanto.math_marks = 100;

    cout << Shanto.math_marks << endl;
}