#include <iostream>
#include <cmath>
using namespace std;

class Figure{
    public:
    virtual float aire() const = 0;

    virtual Figure* operator +(const Figure& obj) const=0;
    virtual Figure* operator -(const Figure& obj) const=0;
};

class Rectangle : public Figure{
    public:
    float longueur;
    float largeur;

    Rectangle(float lon, float lar){
        longueur=lon;
        largeur=lar;
    }

    float aire() const override{
        return longueur * largeur;
    }

    Figure* operator +(const Figure& obj) const override{
        const Rectangle& castedobj = dynamic_cast<const Rectangle&>(obj);
        return new Rectangle(longueur + castedobj.longueur, largeur + castedobj.largeur);
    }

    Figure* operator -(const Figure& obj) const override{
        const Rectangle& castedobj = dynamic_cast<const Rectangle&>(obj);
        return new Rectangle(longueur - castedobj.longueur, largeur - castedobj.largeur);
    }
};

class Cercle : public Figure{
    public:
    float pi = 3.14;
    float rayon;

    Cercle(float r): rayon{r}{}

    float aire() const override{
        return pi * rayon * rayon;
    }

    Figure* operator + (const Figure& obj) const override {
        const Cercle& castedobj = dynamic_cast<const Cercle&>(obj);
        float newaire = aire() + castedobj.aire();
        float newrayon = sqrt(newaire/pi);
        return new Cercle(newrayon);
    }
    Figure* operator - (const Figure& obj) const override {
        const Cercle& castedobj = dynamic_cast<const Cercle&>(obj);
        float newaire = aire() - castedobj.aire();
        float newrayon = sqrt(newaire/pi);
        return new Cercle(newrayon);
    }
};

int main(){
    Figure* r1=new Rectangle(4, 5);
    Figure* r2=new Rectangle(2, 3);

    Rectangle r3 = r1 + *r2;  // additionne les aires, retourne un rectangle équivalent
    cout << "Aire de r3 : " << r3.aire() << endl;

    Cercle c1(3);
    Cercle c2(2);
    Cercle c3 = c1 - c2;
    Cercle* c3 = dynamic_cast<Cercle*>(c_result);
    cout << "Aire du cercle résultant : " << c3.aire() << endl;

    // Bonus : appel via un pointeur de Figure
    Figure* f = new Cercle(4);
    cout << "Aire via polymorphisme : " << f->aire() << endl;

    return 0;
}