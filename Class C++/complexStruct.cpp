#include <iostream>

using namespace std;

typedef struct complex
{
    float real;
    float imag;

} complexNumber;

complexNumber addComplexNumber(complex, complex);

int main()
{
    complexNumber num1, num2, complexSum;
    char signOfImage;

    cout << "For first complex number\n";
    cout << "Enter the real and imaginary parts respectively: ";
    cin >> num1.real >> num1.imag;

    cout << "For second complex number\n";
    cout << "Enter the real and imaginary parts respectively: ";
    cin >> num2.real >> num2.imag;

    // call add function and store the result in complexSum
    complexSum = addComplexNumber(num1, num2);

    // use ternary operator to check the sign of the imaginary
    signOfImage = (complexSum.imag > 0) ? '+' : '-';

    // use ternary operator to adjust the sign of the imaginary number
    complexSum.imag = (complexSum.imag > 0) ? complexSum.imag : -complexSum.imag;

    cout << "Sum= " << complexSum.real << signOfImage << complexSum.imag << "i\n";
}
complexNumber addComplexNumber(complex num1, complex num2)
{
    complex temp;
    temp.real = num1.real + num2.real;
    temp.imag = num1.imag + num2.imag;

    return temp;
}
