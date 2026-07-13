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

// declare a function with
// structure data type as argument
void display_data(const Person &p); // you can decide to remove the p since it is a prototye

int main()
{
    // initialize the structure variable
    Person p1{"Adonai", "Udokwu", 18, 54255};
    cout << "Displaying Information: \n";
    display_data(p1);
}

void display_data(const Person &p)
{
    cout << "First Name: " << p.first_name << endl;
    cout << " Last Name: " << p.last_name << endl;
    cout << "       Age: " << p.age << endl;
    cout << "    Salary: " << p.salary << endl;
}