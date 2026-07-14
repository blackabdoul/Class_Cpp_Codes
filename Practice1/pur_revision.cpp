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

void afficherTrajet(vector<Vehicule *> les_Vehicule)
{
    for (Vehicule *v : les_Vehicule)
    {
        v->klaxsonner();
        v->deplacer();
    }
}

int main()
{
    Vehicule *V = new Voiture();
    Vehicule *M = new Moto();
    Vehicule *Ve = new Velo();
    vector<Vehicule *> les_Vehicules{V, M, Ve};

    afficherTrajet(les_Vehicules);

    for (Vehicule *v : les_Vehicules)
    {
        delete v;
    }
}