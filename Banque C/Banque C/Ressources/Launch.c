//
//  Launch.c
//  Banque C
//
//  Created by Fabio Tavares Marques  on 11/10/2023.
//

#include "Launch.h"
#include "compte_init.h"

int Start(void){
    accountInit(); // Initialise les comptes
    

    //Demande numero de compte
    printf("VEUILLEZ SAISIR VOTRE NUMERO DE COMPTE : ");
    
    //Stockage numero de compte
    int numeroCompte;
    scanf("%d",&numeroCompte);
    
    return numeroCompte;
    
}

int compteValide(int numero){
    
    
    //Verification si numero existe
    //    if (validationCompte(numero) == -1) {
    //        printf("Aucun compte correspondant n'a été trouvé.\n");
    //        etat = 0;
    //    } else {
    //
    //
    //        printf("Compte correspondant trouvé à l'indice %d.\n", validationCompte(2838445));
    //        etat = 1;
    //    }
    
    while (validationCompte(numero) == -1){
        printf("Aucun compte correspondant n'a été trouvé.\n Veuillez re essayer");
        scanf("%d", &numero);
        
    }
    
    return 1;
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
    
    //User choisi
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
