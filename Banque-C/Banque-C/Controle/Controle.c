//
//  Controle.c
//  Banque-C
//
//  Created by Fabio Tavares Marques  on 14/10/2023.
//

#include "Controle.h"
// ==============================================================


void Start(void){
    printf("VEUILLEZ SAISIR VOTRE NUMERO DE COMPTE : ");    //Demande numero de compte

    //Stockage numero de compte
    int numeroCompte;
    scanf("%d",&numeroCompte);
    printf("\n");

}

void Menu(void){
        enum MenuCompte {
            Solde = 1,
            Retrait,
            Virement,
            Transactions,
            Quitter
        };
    
        //Choix menu
        printf("Retrait [1]  Virement[2]  Transactions[3]  Quitter[4]\n");
    
        //User choix
        int MenuChoix;
        printf("VEUILLEZ CHOISIR UNE OPTION : ");
        scanf("%d", &MenuChoix);
    
        switch (MenuChoix) {
            case Solde:
                printf("1002 Euros\n");
                break;
            case Retrait:
                printf("Retiré\n");
            default:
                printf("NULL");
                break;
        }
}









// ==============================================================
