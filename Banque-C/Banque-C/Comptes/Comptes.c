//
//  Comptes.c
//  Banque-C
//
//  Created by Fabio Tavares Marques  on 13/10/2023.
//

#include "Comptes.h"
#include <string.h>
#include "../Structure/Structure_Compte.h"

// ==============================================================

// Tableau de comptes
struct Compte ABC;


// Initialisation manuelle des informations pour le compte
void ComptesInit(void){
    
    ConstructCompte(&ABC, 2838445, "Evian EAU", 1500);
//    ConstructCompte(&LesComptes[1], 3828281, "Cristaline MINERALE", 12990);
//    ConstructCompte(&LesComptes[2], 9384928, "Volvic NATURELLE", 4500);
}






// ==============================================================
