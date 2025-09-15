#include "FactoryVaisseau.h"

Faction* FactoryVaisseau::getRandomFaction()
{
	int aleatoire = Utilitaire::genererNb(1, 2);

	Faction* faction = nullptr;

	if (aleatoire == 1)
	{
		faction = new RedFaction("Faction Rouge", Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50),
			Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50));
	}
	else
	{
		faction = new BlueFaction("Faction Bleu", Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50),
			Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50));
	}
	return faction;
}

//to do :  faire un 3eme const pour tout attribut et les mettre en random 
// avec aussi un tableau de nom, pour les vaisseaux.


Vaisseau* FactoryVaisseau::getRandomVaisseau()
{
	string noms[] = {"Gorrilla IV","Blazor V","Uranium Veloster","Nepturne Black","Kepler DX32XX","Raptor FX50","Danger XVXII"};
	int index = Utilitaire::genererNb(0, 6);
	
	Faction* maFaction = getRandomFaction();
	Vaisseau* vaisseau = nullptr;
	//Genere un nombre aléatoire
	TypeVaisseau typeV = (TypeVaisseau)Utilitaire::genererNb(0, 2);

	if (typeV == TypeVaisseau::guerre)
	{
		vaisseau = new Guerre(noms[index], Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50)
			, Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50),
			Utilitaire::genererNb(10, 50), maFaction);
	}
	else if (typeV == TypeVaisseau::livraison)
	{
		vaisseau = new Livraison(noms[index], Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50)
			, Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50),
			Utilitaire::genererNb(10, 50), maFaction);
	}
	else 
	{
		vaisseau = new Transport(noms[index], Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50)
			, Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50), Utilitaire::genererNb(10, 50),
			Utilitaire::genererNb(10, 50), maFaction);
	}
	return vaisseau;
}