#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string first_name;
    string last_name;
    int age;
    float salary;
};

Person get_data();
// declare a function with
// structure data type as argument
void display_data(const Person &p); // you can decide to remove the p since it is a prototye

int main()
{
    // initialize the structure variable
    Person p = get_data();
    cout << "Displaying Information: \n";
    display_data(p);
}

// define a function that returns a structure variable

Person get_data()
{
    Person p;
    cout << "Enter first name: ";
    cin >> p.first_name;
    cout << "Enter last name: ";
    cin >> p.last_name;
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter salary: ";
    cin >> p.salary;
    return p;
}

void display_data(const Person &p)
{
    cout << "First Name: " << p.first_name << endl;
    cout << " Last Name: " << p.last_name << endl;
    cout << "       Age: " << p.age << endl;
    cout << "    Salary: " << p.salary << endl;
}