#include "Station.h"

Station::Station(int p) : platinum(p) {}

// Ajouter un vaisseau dans le vecteur
void Station::ajouterVaisseau(Vaisseau* v) 
{
    vaisseaux.push_back(v);
}

// Afficher tous les vaisseaux
void Station::afficherVaisseaux()  
{
    std::cout << "===== Vaisseaux dans la station =====" << std::endl;
    for (auto v : vaisseaux) 
    {
        std::cout << v->to_string() << std::endl; // on utilise la méthode de Vaisseau 
    }
    std::cout << "=====================================" << std::endl;
}

// Retourne la liste des vaisseaux (copie du vecteur)
std::vector<Vaisseau*> Station::getVaisseauxDispo()  {
    return vaisseaux;
}

void ::Station::init()
{
    for (int i = 0; i < 3; i++)
    {
        vaisseaux.push_back(FactoryVaisseau::getRandomVaisseau());
    }
}

// Récupérer le montant de platinum
int Station::getPlatinum()  {
    return platinum;
}

// Ajouter du platinum
void Station::ajouterPlatinum(int montant) {
    platinum += montant;
}