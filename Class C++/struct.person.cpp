// Program to assign data to a structure
#include <iostream>
#include <string>
using namespace std;

// Declare structure
struct Person
{
    string first_name;
    string last_name;
    int age;
    float salary;

    // function to display information about many people with the help of member function instead of typing cout for all the people we want to represent

    void displayInfo()
    {
        cout << "\nDisplaying information: \n";
        cout << endl;
        cout << "First name: " << first_name << endl;
        cout << " Last name: " << last_name << endl;
        cout << "       Age: " << age << endl;
        cout << "    Salary: " << salary << endl;
    }
};

int main()
{
    // declare variable of structure person type
    Person p1;

    cout << "Enter first name: ";
    cin >> p1.first_name;
    cout << " Enter last name: ";
    cin >> p1.last_name;
    cout << "       Enter age: ";
    cin >> p1.age;
    cout << "    Enter salary: ";
    cin >> p1.salary;

    // displaying information
    p1.displayInfo();

    // Person p2{"Malick", "LAWAL", 18, 2000};
}