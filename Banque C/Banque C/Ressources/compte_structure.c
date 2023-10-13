//
//  compte_structure.c
//  Banque HSBC C
//
//  Created by Fabio Tavares Marques  on 10/10/2023.
//

#include <stdio.h>
#include <string.h>
#include "compte_structure.h"
#include "compte_init.h"

void initialiserCompte(struct Compte *compte, int numero, const char *nom, int solde) {
    compte->numero = numero;
    strcpy(compte->nom, nom);
    compte->solde = solde;
}

void afficherCompte(const struct Compte *compte) {
    printf("Numero : %d\n", compte->numero);
    printf("Nom : %s\n", compte->nom);
    printf("Solde : %d\n", compte->solde);
}

void solde(void){};;
