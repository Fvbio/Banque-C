//
//  Structure_Compte.c
//  Banque-C
//
//  Created by Fabio Tavares Marques  on 13/10/2023.
//

#ifndef compte_init_h
#define compte_init_h

#include "Structure_Compte.h"
#include <string.h>
// ==============================================================

void ConstructCompte(Compte *compte, int numero, const char *nom, int solde) {
    compte->numero = numero;
    strcpy(compte->nom, nom);
    compte->solde = solde;
}

// ==============================================================
#endif /* account_init_h */
