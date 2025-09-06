#pragma once
#include "Vaisseau.h"

class Livraison : public Vaisseau 
{
	public:
		Livraison(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp,bool livre);
		~Livraison();

		bool EstLivre();
		

protected:
	bool livre;

		virtual std::string to_string();
};

