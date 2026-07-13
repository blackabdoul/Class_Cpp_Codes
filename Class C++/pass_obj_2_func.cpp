#include <iostream>
using namespace std;

class Student
{
public:
    double grades;

    Student(double grade)
        : grades{grade}
    {
    }
};

// funtion that has Student objects as parameters
double average_grade(Student s1, Student s2)
{
    // return average of the grades
    return (s1.grades + s2.grades) / 2;
}

int main()
{
    // Directly initializing the grades
    Student s1(78.65), s2(45.36);

    //OR

    // Taking input (grades) from user
    // double grade1, grade2;
    // cout << "Enter the two grades: ";
    // cin >> grade1 >> grade2;
    // Student s1(grade1), s2(grade2);
    cout << "The average is: " << average_grade(s1, s2);
}