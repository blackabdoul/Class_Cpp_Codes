#include <iostream>
using namespace std;

class Forme
{
protected:
    double largeur;
    double hauteur;

public:
    Forme(double x, double y)
        : largeur{x},
          hauteur{y}
    {
    }
};

class Triangle : public Forme
{
public:
    Triangle(double x, double y) : Forme(x, y)
    {
    }

    void area()
    {
        cout << "The area of the triangle: " << (largeur * hauteur) / 2 << endl;
    }
};

class Rectangle : public Forme
{
public:
    Rectangle(double x, double y) : Forme(x, y)
    {
    }

    void area()
    {
        cout << "The area of the rectangle: " << largeur * hauteur << endl;
    }
};

int main()
{
    double lar, hau;
    cout << "Entrer la largeur et l'hauteur: ";
    cin >> lar >> hau;
    Triangle triangle(lar, hau);
    Rectangle rectangle(lar, hau);
    triangle.area();
    rectangle.area();
}
