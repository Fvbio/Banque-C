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

int indiceCompte; // Indice du compte apres la verification dans verificationCompte()
struct Compte LesCompte[3];


// Initialisation manuelle des informations pour le compte
void comptesInit(void){
    constructCompte(&LesCompte[1], 2838445, "Evian EAU", 1500);
    constructCompte(&LesCompte[2], 3828281, "Cristaline MINERALE", 12990);
    constructCompte(&LesCompte[3], 9384928, "Volvic NATURELLE", 4500);
}

// Verifie si le compte existe
int verificationCompte(int numero){
    for (int i = 0; i <= 3; i++) {
        if (LesCompte[i].numero == numero) {
            indiceCompte = i;
            return i; // Numéro trouvé, retourne 1
        }}
    return 0; // Numéro non trouvé, retourne 0
}

// Fonction pour afficher les informations d'un compte
void afficherCompte(int i) {
    printf("Informations du compte :\n");
    printf("Numéro de compte : %d\n", LesCompte[i].numero); // Pas de & devant ABC.numero
    printf("Nom du titulaire : %s\n", LesCompte[i].nom); // Pas de & devant ABC.nom
    printf("Solde : %d\n", LesCompte[i].solde); // Utilisez %lf pour afficher un double
}

// Affiche le solde
void soldeCompte(void){
    printf("Solde : %d\n", LesCompte[indiceCompte].solde); // Utilisez %lf pour afficher un double
}





// ==============================================================
