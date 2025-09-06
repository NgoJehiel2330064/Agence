#pragma once
#include <string>;
#include <iostream>
#include<ctime>
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

public:
	Vaisseau(string nom,int valeur,int attaque,int defense,int vie,int capacite,int niveau,int exp);
	~Vaisseau();

	inline int getAtt() { return attaque; };
	int getDef() { return defense; };
	int getVie() { return vie; };

	virtual std::string to_string();

};

