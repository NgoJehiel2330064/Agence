#include "Vaisseau.h"
Vaisseau::Vaisseau(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp) :nom(nom),valeurMarchande(valeur), attaque(attaque), defense(defense), vie(vie), capacite(capacite), niveau(niveau), exp(exp)
{

}
Vaisseau :: ~Vaisseau(){}

std::string Vaisseau::to_string()
{
	std::string info;
	info.append("Nom :" + nom + "\n");
	info.append("Attaque :" + std::to_string(this->getAtt()) + "\n");
	info.append("Defense :" + std::to_string(this->getDef()) + "\n");
	info.append("Vie :" + std::to_string(this->getVie()) + "\n");
	info.append("Capacité:" + std::to_string(this->capacite) + "\n");
	info.append("Niveau:" + std::to_string(this->niveau) + "\n");
	info.append("Exp:" + std::to_string(this->exp) + "\n");

	return info;

}
