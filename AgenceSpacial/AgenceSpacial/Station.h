#pragma once
#include <vector>
#include <iostream>
#include "Vaisseau.h"
#include "FactoryVaisseau.h"
class Station
{
private:
	int platinum;                        // la monnaie de la station
	std::vector<Vaisseau*> vaisseaux;    // collection de vaisseaux
	

public:
    // Constructeur : initialise le platinum de d�part
    Station(int p = 0);

    void ajouterVaisseau(Vaisseau* v);

    void afficherVaisseaux() ;

    // liste des vaisseaux disponibles
    std::vector<Vaisseau*> getVaisseauxDispo() ;

    void init();

    // Acc�s au platinum
    int getPlatinum() ;
    void ajouterPlatinum(int montant);


};

