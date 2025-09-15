#pragma once
#include "Vaisseau.h"
#include "Faction.h"
#include "utilitaire.h"
#include "Guerre.h"
#include "Livraison.h"
#include "Transport.h"
#include "RedFaction.h"
#include "BlueFaction.h"


class FactoryVaisseau
{
public:

	static Vaisseau* getRandomVaisseau();
	enum TypeVaisseau 
	{
		transport,
		guerre,
		livraison
	};
private:
	static Faction* getRandomFaction();
};

