//
//  Comptes.h
//  Banque-C
//
//  Created by Fabio Tavares Marques  on 13/10/2023.
//

#ifndef Comptes_h
#define Comptes_h

#include <stdio.h>

#include "../Structure/Structure_Compte.h"

// ==============================================================

void setSoldes(int, int);
int getSolde(void);
void comptesInit(void);
int verificationCompte(int);
int verificationVirement(int);
void soldeCompte(void);
void afficherCompte(int);
void virementCompte(void);
void ajouteSoldeCompte(int);
void retraitSoldeCompte(void);

// ==============================================================
#endif /* Comptes */

