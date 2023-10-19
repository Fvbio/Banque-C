//
//  Bibliotheque.hpp
//  E-Bibliotheque
//
//  Created by Fabio Tavares Marques  on 19/10/2023.
//

#ifndef Bibliotheque_hpp
#define Bibliotheque_hpp

#include "Livre.hpp"

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Bibliotheque{
    private:
        const std::string AdresseTxt = "/Users/tavares/Desktop/E-Bibliotheque/E-Bibliotheque/Classes/Bibliotheque.txt";
        const std::string fichierSauvegarde = AdresseTxt;
        std::vector<Livre> livres;

    
    public:
        Bibliotheque();
    
        void ajouterLivre(const Livre& livre);
        void afficherLivres();
        void rechercherLivre(const std::string& titre);
        void supprimerLivre(const std::string& titre);
        void sauvegarderBibliotheque();
        void chargerBibliotheque();
    
    
    
    
};

#endif /* Bibliotheque_hpp */
