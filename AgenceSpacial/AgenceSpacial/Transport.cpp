#include "Transport.h"
Transport::Transport(string nom, int valeur, int attaque, int defense, int vie, int capacite, int niveau, int exp, bool livre)
	:Vaisseau(nom, valeur, attaque, defense, vie, capacite, niveau, exp), livre(livre)
{

}

Transport::~Transport() {}

bool Transport::EstLivre()
{
	cout << "Colis livré par le transporteur";
	livre = true;
	return livre;
}

std::string Transport::to_string()
{
	std::string message = Vaisseau::to_string();

	message.append("Je suis un vaisseau Transporteur \n");
	return message;
}