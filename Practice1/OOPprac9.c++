#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    string clas;
    int rollNum;
    int marks;

public:
    Student(int marks) : marks{marks} {}

    void gradeCalc()
    {
        if (marks >= 90)
        {
            cout << marks << ": Grade A" << endl;
        }
        else if (marks < 90 && marks >= 75)
        {
            cout << marks << ": Grade B" << endl;
        }
        else if (marks < 75 && marks >= 50)
        {
            cout << marks << ": Grade C" << endl;
        }
        else
        {
            cout << marks << ": Grade D" << endl;
        }
    }
};

int main()
{
    int marks;
    cout << "Enter your mark: ";
    cin >> marks;
    Student student1(marks);
    student1.gradeCalc();
}