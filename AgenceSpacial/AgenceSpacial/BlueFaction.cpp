#include "BlueFaction.h"
BlueFaction::BlueFaction(string nom, int att, int def, int vie, int capacite):Faction(nom,att,def,vie,capacite)
{
	defense = def * 5;
}

BlueFaction::~BlueFaction(){}

std::string BlueFaction::to_string()
{
	std::string message = Faction::to_string();

	message.append("J'ai 5 fois la puissance de defense d'une faction Rouge \n");
	return message;
}