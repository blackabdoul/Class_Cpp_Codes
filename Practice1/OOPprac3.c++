#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;

public:
    void setInfo(string nam, int age, string country)
    {
        name = nam;
        this->age = age;
        this->country = country;
    }
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "country: " << country << endl;
    }
};

int main()
{
    Person person1;
    person1.setInfo("Abdoul Malick LAWAL", 20, "U.K.");
    person1.getInfo();
}