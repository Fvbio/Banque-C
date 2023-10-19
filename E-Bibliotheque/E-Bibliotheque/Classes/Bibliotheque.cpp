//
//  Bibliotheque.cpp
//  E-Bibliotheque
//
//  Created by Fabio Tavares Marques  on 19/10/2023.
//

#include "Bibliotheque.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

Bibliotheque::Bibliotheque() {
    chargerBibliotheque();
}




void Bibliotheque::ajouterLivre(const Livre& livre) {
    livres.push_back(livre);
    sauvegarderBibliotheque();  // Mise à jour du fichier après l'ajout d'un livre.
    std::cout << "Livre ajouté à la bibliothèque : " << livre.getTitre() << std::endl;
}

void Bibliotheque::afficherLivres() {
    std::ifstream bibliotheque(AdresseTxt);

    std::string ligne;
    
    while (std::getline(bibliotheque, ligne)) {
                // Utilisez un flux de chaînes (stringstream) pour diviser la ligne par les virgules.
                std::stringstream ss(ligne);
                std::string titre, auteur, annee;

                // Utilisez getline pour extraire les parties de la ligne.
                std::getline(ss, titre, ',');
                std::getline(ss, auteur, ',');
                std::getline(ss, annee, ',');

                // Affichez l'année.
                std::cout << "Titre : " << titre << std::endl;
                std::cout << "Auteur : " << auteur << std::endl;
                std::cout << "Année : " << annee << std::endl;
            }
}

void Bibliotheque::rechercherLivre(const std::string& titreRecherche) {
    std::ifstream bibliotheque(AdresseTxt);

    std::string ligne;
    
    while (std::getline(bibliotheque, ligne)) {
                // Utilisez un flux de chaînes (stringstream) pour diviser la ligne par les virgules.
                std::stringstream ss(ligne);
                std::string titre, auteur, annee, disponible;

                // Utilisez getline pour extraire les parties de la ligne.
                std::getline(ss, titre, ',');
                std::getline(ss, auteur, ',');
                std::getline(ss, annee, ',');
        std::getline(ss, disponible, ',');
                
        
                if(titre == titreRecherche){
                    // Affichez l'année.
                    std::cout << "Titre : " << titre << std::endl;
                    std::cout << "Auteur : " << auteur << std::endl;
                    std::cout << "Année : " << annee << std::endl;
                    std::cout << "Disponible : " << disponible << std::endl;
                }
        }
}

void Bibliotheque::supprimerLivre(const std::string& titre) {
    }



void Bibliotheque::sauvegarderBibliotheque() {
    std::ofstream fichier(AdresseTxt);

    if (fichier.is_open()) {
        for (const Livre& livre : livres) {
            // Écrit chaque livre dans le fichier sous forme de ligne CSV (Comma-Separated Values).
            fichier << livre.getTitre() << "," << livre.getAuteur() << "," << livre.getAnnee() << "\n";
        }

        fichier.close();
        std::cout << "Bibliothèque sauvegardée avec succès." << std::endl;
    } else {
        std::cerr << "Erreur lors de la sauvegarde de la bibliothèque." << std::endl;
    }
}

void Bibliotheque::chargerBibliotheque() {
    
}
