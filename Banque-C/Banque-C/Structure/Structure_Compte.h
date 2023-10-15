//
//  Structure_Compte.h
//  Banque-C
//
//  Created by Fabio Tavares Marques  on 13/10/2023.
//

#ifndef Structure_Compte_h
#define Structure_Compte_h

#include <stdio.h>
// ==============================================================

typedef struct Compte Compte;

// Structure d'un compte
struct Compte {
    int numero;
    char nom[50]; // Tableau de caractères pour stocker le nom
    int solde;
};

// Prototypes de fonctions associées aux comptes
void ConstructCompte(Compte *compte, int numero, const char *nom, int solde);

// ==============================================================
#endif /* Structure_Compte_h */
