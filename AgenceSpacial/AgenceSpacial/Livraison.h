#pragma once
#include "Vaisseau.h"
#include "RedFaction.h"
#include "BlueFaction.h"
class Livraison : public Vaisseau 
{
	public:
		Livraison(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp,bool livre);
		Livraison(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp,bool livre,Faction* faction);
		Livraison(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp,Faction* faction);
		~Livraison();

		bool EstLivre();
		
		Livraison(Faction* fact);

protected:
	bool livre;

		virtual std::string to_string();
};

