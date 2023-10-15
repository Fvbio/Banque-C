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

void comptesInit(void);
int verificationCompte(int);
void soldeCompte(void);
void afficherCompte(int);

// ==============================================================
#endif /* Comptes */

