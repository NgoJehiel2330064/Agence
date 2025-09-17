#include "Station.h"

Station::Station(int p,int v) : platinum(p),vieStation(v) {}

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
    cout << "VOICI LA LISTE DE VOS VAISSEAUX : \n";

    for (int i = 0; i < 3; i++)
    {
        vaisseaux.push_back(FactoryVaisseau::getRandomVaisseau());
    }
}

// Récupérer le montant de platinum
int Station::getPlatinum()  {
    return platinum;
}

int Station::afficherNbVaisseau()
{
    return vaisseaux.size();
}


int Station::getVie() {
    return vieStation;
}


 void Station::acheterVaisseau()
 {
     vector <Vaisseau*> vaisseauAvendre;
    cout << "VOICI LA LISTE DES VAISSEAUX DISPONIBLE A L ACHAT : \n";

    for (int i = 0; i < 10; i++)
    {
        vaisseauAvendre.push_back(FactoryVaisseau::getRandomVaisseau());
    }

    for (int j =0 ; j < vaisseauAvendre.size(); j++)
    {
        std::cout << j+1 << " - "  + vaisseauAvendre[j]->to_string() << std::endl; // on utilise la méthode de Vaisseau 
    }

    int choix;
    cout << "Entrer votre choix parmi les " + std::to_string(vaisseauAvendre.size())  << " vaisseaux disponibles\n";
    cin >> choix;

    cout << "Vous avez acheter le vaisseau \n" << vaisseauAvendre[choix - 1]->to_string();

    ajouterVaisseau(vaisseauAvendre[choix - 1]);

}



// Ajouter du platinum
void Station::ajouterPlatinum(int montant) {
    platinum += montant;
}

string Station::AfficherInfoStation()
{
    std::string info;
    info.append("INFORMATION DE VOTRE STATION\n");
    info.append("PLATINUM DISPONIBLE :" + std::to_string(this->getPlatinum()) + "\n");
    info.append("VIE RESTANTE :" + std::to_string(this->getVie()) + "\n");
    info.append("NOMBRE DE VAISSEAU DISPONIBLE :" + std::to_string(this->afficherNbVaisseau()) + "\n");
    return info;
}




std::string Station::to_string()
{
    std::string info;
    info.append("INFORMATION DE VOTRE STATION\n");
    info.append("PLATINUM DISPONIBLE :" + std::to_string(this->getPlatinum()) + "\n");
    info.append("VIE RESTANTE :" + std::to_string(this->getVie()) + "\n");
    info.append("NOMBRE DE VAISSEAU DISPONIBLE :" + std::to_string(this->afficherNbVaisseau()) + "\n");
    return info;
}