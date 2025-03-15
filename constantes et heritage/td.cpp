#include <iostream>
#include <string>
using namespace std;

class personne {
private:
    string nom, prenom, adresse;
    int age;

public:
    personne();
    personne(string nom, string prenom, string adresse, int age);

    inline void setnom(string nom) { this->nom = nom; }
    inline void setprenom(string prenom) { this->prenom = prenom; }
    inline void setadresse(string adresse) { this->adresse = adresse; }
    inline void setage(int age) { this->age = age; }

    inline string getnom() { return this->nom; }
    inline string getprenom() { return this->prenom; }
    inline string getadresse() { return this->adresse; }
    inline int getage() { return this->age; }

    void affichageinfos();
};


personne::personne() {
    nom = prenom = adresse = "";
    age = 0;
}


personne::personne(string nom, string prenom, string adresse, int age) {
    this->nom = nom;
    this->prenom = prenom;
    this->adresse = adresse;
    this->age = age;
}

// Méthode pour afficher les informations de la personne
void personne::affichageinfos() {
    cout << "Infos personne => [Nom: " << this->nom << ", Prenom: " << this->prenom
         << ", Adresse: " << this->adresse << ", Age: " << this->age << "]" << endl;
}

int main() {
    
    personne p1("Nominal", "Prenominal", "Adressable", 22);

    
    p1.affichageinfos();

    // Utilisation des setters pour modifier les informations
    p1.setnom("NouveauNom");
    p1.setprenom("NouveauPrenom");
    p1.setadresse("NouvelleAdresse");
    p1.setage(25);

  
    p1.affichageinfos();

    return 0;
}