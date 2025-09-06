#pragma once
#include <string>;
#include <iostream>
#include<ctime>
using namespace std;

class Faction
{
protected:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;

public:
	Faction(string nom,int att,int def,int vie,int capacite);
	Faction(int att, int def, int vie, int cap);
	~Faction();
	string getNom()
	{
		return nom;
	}

	virtual std::string to_string();

};



