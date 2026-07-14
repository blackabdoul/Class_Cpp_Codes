#include <iostream>
using namespace std;

class Somme
{
private:
    int n1;
    int n2;

public:
    Somme(int num1, int num2) : n1{num1}, n2{num2}{
    }

    void som()
    {
        cout << "La somme de " << n1 << " et " << n2 << " est " << n1 + n2 << endl;
    }
};

int main()
{
    int num1, num2;
    cout << "Entrer deux numbres pour calculer la somme ";
    cin >> num1 >> num2;
    Somme somme(num1, num2);
    somme.som();
}