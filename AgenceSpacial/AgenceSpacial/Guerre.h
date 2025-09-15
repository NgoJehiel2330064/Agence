#pragma once
#include "Vaisseau.h"
#include "RedFaction.h"
#include "BlueFaction.h"
class Guerre : public Vaisseau
{
public:
	Guerre(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, bool modeGuerre);
	Guerre(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, bool modeGuerre, Faction* faction);
	Guerre(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, Faction* faction);
	~Guerre();

	Guerre(Faction* fact);
	bool IraEnGuerre();

	virtual std::string to_string();
	protected:
		bool modeGuerre;
};

