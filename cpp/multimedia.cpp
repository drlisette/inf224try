#include "multimedia.h"
#include <string>
#include <iostream>

using namespace std;

Multimedia::Multimedia(){};

Multimedia::Multimedia(string fileName, string pathName):nom(fileName), nomDir(pathName){};

string Multimedia::getNom() const {return nom;}

string Multimedia::getNomDir() const {return nomDir;}

void Multimedia::setNom(string name){nom = name;}

void Multimedia::setNomDir(string path){nomDir = path;}

void Multimedia::displayInfo(ostream& o) const{
    o<<"object\'s name: "<<getNom()<<endl;
    o<<"object\'s path: "<<getNomDir()<<endl;
};

Multimedia::~Multimedia(){};
