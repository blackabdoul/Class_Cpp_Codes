#include <iostream>
using namespace std;

class Person
{
private:
    int age;
    double height;

public:
    Person()
        : age{20}
    {
    }

    Person(int a)
    {
        age = a;
    }

    Person(int a, double h)
        : age(a),
          height{h}
    {
    }

    int get_age()
    {
        return age;
    }

    int get_height()
    {
        return height;
    }
};

int main()
{
    Person p1, p2(50), p3(32, 53.74);
    cout << "The object without parameter specified: " << p1.get_age() << endl;
    cout << "The object with a  parameter specified: " << p2.get_age() << endl;
    cout << "The object with two parameters specified: " << p3.get_age() << " " << p3.get_height();
}