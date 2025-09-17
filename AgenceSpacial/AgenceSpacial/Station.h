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
    int vieStation;
	

public:
    // Constructeur : initialise le platinum de départ
    Station(int p = 0,int vie =0);

    void ajouterVaisseau(Vaisseau* v);

    void afficherVaisseaux() ;

    // liste des vaisseaux disponibles
    std::vector<Vaisseau*> getVaisseauxDispo() ;

    void init();

    // Accès au platinum
    int getPlatinum() ;
    int getVie();
    void ajouterPlatinum(int montant);
    int afficherNbVaisseau();


   string AfficherInfoStation();

   void acheterVaisseau();



    virtual std::string to_string();

};

