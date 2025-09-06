#pragma once
#include "Vaisseau.h"

class Transport : public Vaisseau
{
	public:
	Transport(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, bool livre);
	~Transport();

	bool EstLivre();
	protected:
	bool livre;
	virtual std::string to_string();
};

