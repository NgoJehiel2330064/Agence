#pragma once
#include "Faction.h"

class BlueFaction: public Faction
{
public:
	BlueFaction(string nom, int att, int def, int vie, int capacite);
	~BlueFaction();

	virtual std::string to_string();
};

