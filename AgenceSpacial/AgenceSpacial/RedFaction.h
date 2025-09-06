#pragma once
#include "Faction.h"

class RedFaction : public Faction
{
public:
	RedFaction(string nom, int att, int def, int vie, int capacite);
	~RedFaction();

	virtual std::string to_string();
};

