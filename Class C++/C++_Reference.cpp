#include <iostream>
using namespace std;

/* int main()
{
    string city = "Abidjan";

    // Declare a refernce for variable city
    string &ref_city = city;

    // print the variables
    cout << "Value of variable: " << city << endl;
    cout << "Value of reference: " << ref_city << endl;

    // modify the variable using reference
    ref_city = "San Pedro";

    // display the variable
    cout << endl
         << "After Modification: " << endl
         << endl;
    cout << "Variable Value = " << city << endl;
    cout << "Reference Value = " << ref_city << endl;
}*/

#include <iostream>

using namespace std;

int main()
{

    string city1 = "Paris";

    // create a reference to the variable
    string &ref_city = city1;

    // display the variable
    cout << "city1 = " << city1 << endl;
    cout << "ref_city = " << ref_city << endl;

    string city2 = "New York";

    // trying to modify the ref_city reference variable to refer to city2
    // but it assigns the value of city2 to the variable city1
    ref_city = city2;

    // display the variables
    cout << endl
         << "city1 = " << city1 << endl;
    cout << "city2 = " << city2 << endl;
    cout << "ref_city = " << ref_city << endl;

    return 0;
}