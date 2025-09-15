#include "Guerre.h"
Guerre::Guerre(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, bool guerre)
	:Vaisseau(nom, valeur, attaque, defense, vie, capacite, niveau, exp), modeGuerre(guerre)
{

}

Guerre::Guerre(Faction* fact) : Vaisseau(fact)
{}


Guerre::Guerre(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, Faction* faction)
	:Vaisseau(nom, valeur, attaque, defense, vie, capacite, niveau, exp, faction), modeGuerre(false)
{
}


Guerre::~Guerre() {}




bool Guerre::IraEnGuerre()
{
	cout << "Préparation en cours pour la guerre\n";
	modeGuerre = true;
	return modeGuerre;
}

std::string Guerre::to_string()
{
	std::string message = Vaisseau::to_string();


	message.append("Je suis un vaisseau de Guerre.\n");
	return message;
}