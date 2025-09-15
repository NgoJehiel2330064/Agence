#pragma once
#include <string>
#include <iostream>
#include<ctime>
#include "Faction.h"
#include "RedFaction.h"
#include "BlueFaction.h"
using namespace std;
class Vaisseau
{
protected:
	string nom;
	int valeurMarchande;
	int attaque;
	int defense;
	int vie;
	int capacite;
	int niveau;
	int exp;
	Faction* fact;

public:
	Vaisseau(string nom,int valeur,int attaque,int defense,int vie,int capacite,int niveau,int exp);
	Vaisseau(Faction* _fact);
	Vaisseau(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, Faction* _fact);
	~Vaisseau();

	inline int getAtt() { return attaque; };
	int getDef() { return defense; };
	int getVie() { return vie; };

	virtual std::string to_string();

};

