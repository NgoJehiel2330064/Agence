#include "Station.h"
#include "Faction.h"
#include "Guerre.h"
#include "Transport.h"
#include "RedFaction.h"
#include "BlueFaction.h"
#include "utilitaire.h"

int main() {
    srand(time(NULL));
    Station station(500); 

    station.init();

    std::cout << "Platinum disponible : " << station.getPlatinum() << std::endl;
    station.afficherVaisseaux();
}
