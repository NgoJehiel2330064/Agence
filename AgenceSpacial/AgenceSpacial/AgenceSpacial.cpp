#include "Station.h"
#include "Faction.h"
#include "Guerre.h"
#include "Transport.h"
#include "RedFaction.h"
#include "BlueFaction.h"
#include "utilitaire.h"


bool enExploration = false;
int nbTourRestant = 0;
int dureeMission = 0;





void EnvoyerEnExploration()
{
    if (!enExploration)
    {
        nbTourRestant = Utilitaire::genererNb(2, 5);
        dureeMission = nbTourRestant;
        enExploration = true;

        cout << "Le vaisseau  part en exploration pour " << nbTourRestant << "tours.\n";
    }
    else
    {
        cout << "Le vaisseau est déjà en exploration";
    }
}

void PasserUnTour()
{
    if (enExploration) {
        nbTourRestant--;
        cout << "Il reste " << nbTourRestant << " tours avant le retour.\n";

        if (nbTourRestant <= 0) {
            enExploration = false;

            // Probabilité basée sur la durée de mission
            int chance = Utilitaire::genererNb(0, 100);
            int probabilite = dureeMission * 20;
            // 2 tours = 40%, 3 tours = 60%, 4 tours = 80%, 5 tours = 100%

            if (chance <= probabilite) {
                cout << "Exploration reussie ! Le vaisseau ramene des ressources.\n";
            }
            else {
                cout << "Exploration echouee ! Rien trouve.\n";
            }
        }
    }
    else {
        cout << "Aucun vaisseau en exploration.\n";
    }
}


int main() {
    srand(time(NULL));
    Station station(500, 100);
    station.init();

    int choix = 0;

   do
    {
        cout << "\nBienvenue dans le jeu de la Station Spacial\n";
        cout << "Menu Spacial\n";
        cout << "1- Voir les informations de la station\n";
        cout << "2- Voir la liste des vaisseaux disponibles dans la station\n";
        cout << "3- Acheter un vaisseau\n";
        cout << "4- Envoyer en exploration\n";
        cout << "5- Passer un tour\n";
        cout << "0- Quitter\n";
        cout << "Entrez votre choix :\n";
        cin >> choix;

        switch (choix)
        {
        case 1: cout << station.AfficherInfoStation(); break;
        case 2:  station.afficherVaisseaux(); break;
        case 3: station.acheterVaisseau(); break;
        case 4:EnvoyerEnExploration(); break;
        case 5: PasserUnTour(); break;
        default:
            cout << "Merci d'avoir jouer\n";
        }

   } while (choix != 0);
}




