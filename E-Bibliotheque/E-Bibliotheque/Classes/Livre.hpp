//
//  Livre.hpp
//  E-Bibliotheque
//
//  Created by Fabio Tavares Marques  on 19/10/2023.
//

#ifndef Livre_hpp
#define Livre_hpp

#include <stdio.h>
#include <string>

class Livre{
    private:
        std::string titre;
        std::string auteur;
        int annee;
        int disponible = 1;
    
    public:
        Livre(const std::string& titre, const std::string& auteur, const int& annee): titre(titre), auteur(auteur), annee(annee){};
        
    std::string getTitre() const;
    std::string getAuteur() const;
    int getAnnee() const;
    int getDisponible();
    void setDisponible(int etat);
    
};


#endif /* Livre_hpp */
