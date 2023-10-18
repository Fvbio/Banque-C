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
int indiceCompteDestinataire; // Indice du compte qui recoit le virement;
int montant; //Lorsqu'un veut faire un virement le montant que sera transferé.
struct Compte LesCompte[3];

// Mettre le solde dans un fichier externe
void setSoldes(int indice, int montantOperation) {
    FILE *fichier = fopen("/Users/tavares/Desktop/Banque-C/Banque-C/Comptes/solde.txt", "r+"); // Ouvrir le fichier en mode lecture/écriture

    int compteIndice;
    int solde;

    // Parcourez le fichier pour trouver la ligne correspondant à l'indice
    while (fscanf(fichier, "%d %d", &compteIndice, &solde) == 2) {
        if (compteIndice == indice) {
            // Ajoutez le montant de l'opération au solde actuel
            solde += montantOperation;

            // Positionnez le curseur de fichier à la position de la ligne que vous voulez mettre à jour
            fseek(fichier, -sizeof(int) * 2, SEEK_CUR);

            // Écrivez le nouveau solde dans le fichier
            fprintf(fichier, "%d %d", compteIndice, solde);

            break;
        }
    }

    fclose(fichier);
}





// Initialisation manuelle des informations pour le compte
void comptesInit(void){
    constructCompte(&LesCompte[1], 2838445, "Evian EAU", 0);
    constructCompte(&LesCompte[2], 3828281, "Cristaline MINERALE", 0);
    constructCompte(&LesCompte[3], 9384928, "Volvic NATURELLE", 0);
    
}


int getSolde(void) {
    FILE *fichier = fopen("/Users/tavares/Desktop/Banque-C/Banque-C/Comptes/solde.txt", "r");

    int compteIndice;
    int solde;
    int found = 0; // Utilisé pour savoir si le compte a été trouvé

    while (fscanf(fichier, "%d %d", &compteIndice, &solde) == 2) {
        if (compteIndice == indiceCompte) {
            found = 1;
            break;
        }
    }
    
    fclose(fichier);

    if (found) {
        printf("Solde : %d\n\n", solde);
        return solde;
    } else {
        return -1; // Une valeur négative pour indiquer que le compte n'a pas été trouvé
    }
}

// Verifie si le compte existe
int verificationCompte(int numero){
    for (int i = 0; i <= 3; i++) {
        if (LesCompte[i].numero == numero) {
            indiceCompte = i;
            return i; // Numéro trouvé, retourne 1
        }
    }
    return 0; // Numéro non trouvé, retourne 0
}


// Verifie si le compte existe pour le virement
int verificationVirement(int numero2){
    for (int i = 0; i <= 3; i++) {
        if (LesCompte[i].numero == numero2) {
            indiceCompteDestinataire = i;
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

// Faire un virement
void virementCompte(void){
    
    int compteDestinataire;
    
    printf("Numero de compte du destinataire: ");
    scanf("%d", &compteDestinataire);
    
    printf("Sasissez le montant: ");
    scanf("%d", &montant);
        
    if(verificationVirement(compteDestinataire) != 0){
        LesCompte[indiceCompteDestinataire].solde += montant;
        LesCompte[indiceCompte].solde -= montant;
        printf("Virement envoyé votre nouveau solde : %d Euros\n\n", LesCompte[indiceCompte].solde);

    }else{
        printf("Transaction échoué\n");
    }
}


// ==============================================================
