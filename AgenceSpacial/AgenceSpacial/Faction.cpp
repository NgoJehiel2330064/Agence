#include "Faction.h"
Faction::Faction(string nom, int att, int def, int vie, int capacite) :nom(nom), attaque(att), defense(def), vie(vie), capacite(capacite)
{

}

Faction::Faction(int att, int def, int vie, int capacite) :attaque(att), defense(def), vie(vie), capacite(capacite)
{

}

Faction :: ~Faction(){}
std::string Faction::to_string()
{
	std::string info;
	info.append("Nom :" + nom + "\n");
	info.append("Attaque :" + std::to_string(this->attaque) + "\n");
	info.append("Defense :" + std::to_string(this->defense) + "\n");
	info.append("Vie :" + std::to_string(this->vie) + "\n");
	info.append("Capacite:" + std::to_string(this->capacite) + "\n");
	return info;

}



