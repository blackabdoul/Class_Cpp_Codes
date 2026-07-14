#include <iostream>
using namespace std;

int main()
{
    int p_kiloTomato, n_kiloTomato, VAT;
    cout << "Enter the price of a kilo of tomato: ";
    cin >> p_kiloTomato;
    cout << "Enter the number of a kilo of tomato: ";
    cin >> n_kiloTomato;
    cout << "Enter the VAT rate: ";
    cin >> VAT;

    int p_VAT = (((VAT * p_kiloTomato * n_kiloTomato) / 100) + (p_kiloTomato * n_kiloTomato));
    cout << "This is the final VTA price: " << p_VAT;
}