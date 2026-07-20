#include <iostream>
#include <vector>
using namespace std;

class Vehicule{
    public:
    virtual void klaxonner() const = 0;
    virtual void deplacer() const = 0;

    virtual ~Vehicule(){
        cout<<"Vehicule detruite!";
    }
};

class Voiture : public Vehicule{
    public:
    void klaxonner() const override{
        cout<<"Tuut!";
    };
    virtual void deplacer() const override{
        cout<<"Roule sur la route";
    };

    ~Voiture() override{
        cout<<"\nVoiture detruite!";
    }
};
class Moto : public Vehicule{
    public:
    void klaxonner() const override{
        cout<<"Bip bip!";
    };
    virtual void deplacer() const override{
        cout<<"File entere les voitures";
    };

    ~Moto() override{
        cout<<"\nMoto detruite!";
    }
};
class Velo : public Vehicule{
    public:
    void klaxonner() const override{
        cout<<"Driiing";
    };
    virtual void deplacer() const override{
        cout<<"Avance sur la piste cyclabe";
    };

    ~Velo() override{
        cout<<"\nVelo detruite!";
    }
};

void afficherTrajet(vector<Vehicule*> conteneur){
    for(auto c : conteneur){
        c->deplacer();
        cout<<endl;
        c->klaxonner();
        cout<<endl;
    }
}

int main(){
    Voiture* voit = new Voiture();
    Moto* moto = new Moto();
    Velo* velo = new Velo();

    vector<Vehicule*> vehicules {voit,moto,velo};

    afficherTrajet(vehicules);

    delete voit;
    delete moto;
    delete velo;
}