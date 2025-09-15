#include "Livraison.h"
Livraison::Livraison(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, bool livre)
	:Vaisseau(nom,valeur,attaque,defense,vie,capacite,niveau,exp),livre(livre) {}

Livraison::Livraison(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, bool livre,Faction* fact)
	:Vaisseau(nom, valeur, attaque, defense, vie, capacite, niveau, exp,fact), livre(livre) 
{
	
}

Livraison::Livraison(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, Faction* fact)
	:Vaisseau(nom, valeur, attaque, defense, vie, capacite, niveau, exp, fact), livre(false)
{

}


Livraison::~Livraison(){}

bool Livraison::EstLivre()
{
	cout << "Colis livré par le livreur";
	livre = true;
	return livre;
}

Livraison::Livraison(Faction* fact) : Vaisseau(fact){}

std::string Livraison::to_string()
{
	std::string message = Vaisseau::to_string();

	message.append("Je suis un vaisseau livreur \n");
	return message;
}