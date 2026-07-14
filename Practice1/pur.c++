#include <iostream>
#include <vector>
using namespace std;

class Vehicule
{
public:
    virtual void klaxsonner() const = 0;
    virtual void deplacer() const = 0;

    virtual ~Vehicule()
    {
        cout << "Vehicule detruit" << endl;
    }
};

class Voiture : public Vehicule
{
public:
    void klaxsonner() const override
    {
        cout << "Tuut!" << endl;
    }
    void deplacer() const override
    {
        cout << "Roule sur la route" << endl;
    }

    ~Voiture()
    {
        cout << "Voiture detruit" << endl;
    }
};

class Moto : public Vehicule
{
public:
    void klaxsonner() const override
    {
        cout << "Bip bip!" << endl;
    }
    void deplacer() const override
    {
        cout << "File entre les voitures" << endl;
    }

    ~Moto()
    {
        cout << "Moto detruit" << endl;
    }
};

class Velo : public Vehicule
{
public:
    void klaxsonner() const override
    {
        cout << "Driiing!" << endl;
    }
    void deplacer() const override
    {
        cout << "Avance sur la piste cyclabe" << endl;
    }

    ~Velo()
    {
        cout << "Velo detruit" << endl;
    }
};

void afficherTraget(vector<Vehicule *> les_v)
{
    for (Vehicule *v : les_v)
    {
        v->klaxsonner();
        v->deplacer();
        cout << endl;
    }
}

int main()
{

    Vehicule *voiture_p = new Voiture();
    Vehicule *moto_p = new Moto();
    Vehicule *velo_p = new Velo();
    vector<Vehicule *> vehicule_p{voiture_p, moto_p, velo_p};

    afficherTraget(vehicule_p);

    for (Vehicule *v : vehicule_p)
    {
        delete v;
    }
}