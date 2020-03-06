#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H
#include <string>
#include <iostream>

using namespace std;

class Multimedia{
protected:
    string nom="";
    string nomDir="";
public:
    Multimedia();
    Multimedia(string, string);
    string getNom() const;
    string getNomDir() const;
    void setNom(string);
    void setNomDir(string);
    // affichier les attributs de multimedia
    virtual void displayInfo(ostream& ) const;
    // fonction qui joue des objets multimedia
    virtual void play() const = 0;
    virtual ~Multimedia();
};

#endif // MULTIMEDIA_H
