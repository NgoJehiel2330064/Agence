#pragma once
#include "Vaisseau.h"
class Guerre : public Vaisseau
{
public:
	Guerre(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, bool modeGuerre);
	~Guerre();

	bool IraEnGuerre();

	virtual std::string to_string();
	protected:
		bool modeGuerre;



};

