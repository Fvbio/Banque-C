//
//  Controle.c
//  Banque-C
//
//  Created by Fabio Tavares Marques  on 14/10/2023.
//

#include "Controle.h"
#include "../Comptes/Comptes.h"

#include <stdlib.h>

// ==============================================================
int etat = 0; // permet d'afficher Menu si numero de compte Validé
int numero; 

void Start(void){
    
    comptesInit();
    int numeroCompte;
    int tentative = 1;
    
    while (tentative <= 3) {
        printf("VEUILLEZ SAISIR VOTRE NUMERO DE COMPTE : ");
        scanf("%d", &numeroCompte);
        
        if (verificationCompte(numeroCompte) != 0) {
            printf("Connexion réussie.\n");
            etat = 1;
            break;  // Sort de la boucle si la connexion est réussie
        } else {
            printf("Numéro de compte incorrect. Tentative %d de %d.\n\n", tentative, 3);
            if (tentative == 3) {
                printf("Nombre maximal de tentatives atteint. Accès refusé.\n\n");
                Exit();
            }
        }tentative++;
    }
}

void Menu(void){
    
    while(etat == 1){
        enum MenuCompte {
            Solde = 1,
            Virement,
            Historique,
            Quitter
        };
        
        //Choix menu
        printf("Solde[1]  Virement[2]  Historique[3]  Quitter[4]\n");
        
        //User choix
        int MenuChoix;
        printf("VEUILLEZ CHOISIR UNE OPTION : ");
        scanf("%d", &MenuChoix);
        
        switch (MenuChoix) {
            case Solde:
                soldeCompte();
                break;
                
            case Virement:
                printf("INDISPONIBLE POUR LE MOMENT\n");
                break;
                
            case Historique:
                printf("INDISPONIBLE POUR LE MOMENT\n");
                break;
                
            case Quitter:
                Exit();
                break;
                
            default:
                printf("Invalide ");
                break;
        }}
}

void Exit(void) {
    exit(0);
};








// ==============================================================
