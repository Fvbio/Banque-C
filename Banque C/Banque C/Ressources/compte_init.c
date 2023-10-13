//
//  compte_init.c
//  Banque HSBC C
//
//  Created by Fabio Tavares Marques  on 11/10/2023.
//

#include "compte_init.h"
#include "compte_structure.h"

// Tableau de comptes
struct Compte LesComptes[3];

// Initialisation manuelle des informations pour le compte
void accountInit(void){
    initialiserCompte(&LesComptes[0], 2838445, "Evian EAU", 1500);
    initialiserCompte(&LesComptes[1], 3828281, "Cristaline MINERALE", 12990);
    initialiserCompte(&LesComptes[2], 9384928, "Volvic NATURELLE", 4500);
}

// Verifie si un numero de compte existe
int validationCompte(int numero) {
    printf("Informations des comptes :\n");
    
    int valide = -1; // Initialisation de la variable valide à -1 (aucun compte correspondant)
        
    int taille = sizeof(LesComptes) / sizeof(LesComptes[0]); // Calcul de la taille du tableau
        
    for (int i = 0; i < taille; i++) {
        if (numero == LesComptes[i].numero) {
            valide = i; // Le compte correspondant a été trouvé, valide contient l'indice du compte
            break; // Sortir de la boucle, car le compte a été trouvé
        }
    }
        
    return valide;

}







