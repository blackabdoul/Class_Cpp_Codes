#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    Complex operator / (const Complex& other) {
        double denominator = other.real * other.real + other.imag * other.imag;
        double newReal = (real * other.real + imag * other.imag) / denominator;
        double newImag = (imag * other.real - real * other.imag) / denominator;
        return Complex(newReal, newImag);
    }

    void display() {
        if (imag < 0)
            cout << real << " - " << -imag << "i" << endl;
        else
            cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    double a, b, x, y;
    cout << "Enter real and imaginary part of z1 (a b): ";
    cin >> a >> b;
    cout << "Enter real and imaginary part of z2 (x y): ";
    cin >> x >> y;

    Complex z1(a, b), z2(x, y);
    Complex result = z1 / z2;

    cout << "z1 / z2 = ";
    result.display();

    return 0;
}