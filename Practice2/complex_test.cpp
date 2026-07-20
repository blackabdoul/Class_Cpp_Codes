#include <iostream>
using namespace std;

class Complex{
    public:
        int real;
        int imag;

        Complex(int r=0, int i=0){
            real=r;
            imag=i;
        }

        Complex operator * (const Complex& other){
            int preal= real * other.real;
            int pimag= imag * other.imag;

            return Complex(preal,pimag);
        }

        void display(){
            if (imag<0){
                cout<<real<<"-"<<-imag;
            }
            else{
                cout<<real<<"+"<<imag;
            }
        }
    
};

int main(){
    int z1a, z1b, z2a, z2b;
    cout<<"Enter real and imaginary number of Complex number1: ";
    cin>>z1a>>z1b;
    cout<<"Enter real and imaginary number of Complex number2: ";
    cin>>z2a>>z2b;

    Complex z1(z1a,z1b);
    Complex z2(z2a,z2b);

    cout<<"\nThe Complex product is"<<endl;
    Complex product = z1 * z2;
    product.display();
}
