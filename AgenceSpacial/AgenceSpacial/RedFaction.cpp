#include "RedFaction.h"
RedFaction::RedFaction(string nom, int att, int def, int vie, int capacite) :Faction(nom, att, def, vie, capacite)
{
	attaque = att * 5;
}
RedFaction::~RedFaction(){}


std::string RedFaction::to_string()
{
	std::string message = Faction::to_string();
	message.append("J'ai 5 fois la puissance d'attaque d'une faction Bleu \n");
	return message;
}