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
    char nom[50];
    int solde;
    int nombreDeTransactions; // Compteur du nombre de transactions dans l'historique
};



// Prototypes de fonctions associées aux comptes
void constructCompte(Compte *compte, int numero, const char *nom, int solde);
void setSolde(int solde);
// ==============================================================
#endif /* Structure_Compte_h */
