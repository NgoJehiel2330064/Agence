// AgenceSpacial.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Faction.h"
#include "RedFaction.h"
#include "BlueFaction.h"
#include "Guerre.h"


int main()
{
    
    RedFaction factionRouge("Red", 15, 30, 50, 25);
    BlueFaction factionbleu("Blue", 20, 25, 50, 92);
    Guerre vaisseauDeGuerre("WarZone",20,100,80,500,1000,18,18,false);
    vaisseauDeGuerre.IraEnGuerre();


    cout << vaisseauDeGuerre.to_string() <<"\n";
   cout<< factionbleu.to_string() << "\n";
   cout << factionRouge.to_string() << "\n";
}

