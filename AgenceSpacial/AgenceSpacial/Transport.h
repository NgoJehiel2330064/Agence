#pragma once
#include "Vaisseau.h"
#include "RedFaction.h"
#include "BlueFaction.h"

class Transport : public Vaisseau
{
	public:
	Transport(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, bool livre);
	Transport(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, bool livre,Faction* fact);
	Transport(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, Faction* fact);
	~Transport();

	bool EstLivre();

	Transport(Faction* fact);
	protected:
	bool livre;
	virtual std::string to_string();
};

