//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include <fstream>
#include <string>
#include "multimedia.h"
#include "photo.h"
#include "video.h"
#include "film.h"
#include "group.h"
#include "multimediamanager.h"
#include "tcpserver.h"
#include <sstream>

using namespace std;
typedef std::shared_ptr<Multimedia> P;

int main(int argc, const char* argv[])
{
//****** 3eme etage
//    string name="Jane Eyre";
//    string direction="media/book/classic";
//    Multimedia *file1=new Multimedia(name,direction);
//    ofstream fb("try.txt");
//    if (fb) file1->displayInfo(fb);
//    cout<<"Nom de l'objet: "<<file1->getNom()<<endl;
//    cout<<"Chemin de l'objet: "<<file1->getNomDir()<<endl;
//    cout<<"---------------------------------------------"<<endl;
//    delete file1;
//    file1=nullptr;
//    name="Inception";
//    direction="media/film";
//    file1=new Multimedia(name,direction);
//    cout<<"Nom de l'objet: "<<file1->getNom()<<endl;
//    cout<<"Chemin de l'objet: "<<file1->getNomDir()<<endl;

//****** 4eme etage
//    Video* episode=new Video("friend","Friends-102.mkv",23);
//    cout<<"Type de fichier: video"<<endl;
//    cout<<"Nom: "<<episode->getNom()<<endl;
//    cout<<"Chemin: "<<episode->getNomDir()<<endl;
//    cout<<"Duree: "<<episode->getDuree()<<endl;
//    ofstream fb2("tryVideo.txt");
//    if (fb2) episode->displayInfo(fb2);
//    double lengthCompleteVersion=25;
//    episode->setDuree(lengthCompleteVersion);
//    cout<<"Duree: "<<episode->getDuree()<<endl;
//    episode->play();

//    cout<<"---------------------------------------------"<<endl;

//    Photo* photo=new Photo("plant","$HOME/inf224/plant.jpg",1200,800);
//    cout<<"Type de fichier: photo"<<endl;
//    cout<<"Nom: "<<photo->getNom()<<endl;
//    cout<<"Chemin: "<<photo->getNomDir()<<endl;
//    cout<<"Length: "<<photo->getLongitude()<<endl;
//    cout<<"Width: "<<photo->getLatitude()<<endl;
//    int trimmedLength=900;
//    int trimmedWidth=600;
//    photo->setLongitude(trimmedLength);
//    photo->setLatitude(trimmedWidth);
//    ofstream fb1("tryPhoto.txt");
//    if (fb1) photo->displayInfo(fb1);
//    photo->play();


//****** 5eme etage
//    Multimedia** media=new Multimedia* [5];
//    unsigned int count=0;
//    media[count++]=new Photo("plant","$HOME/inf224/plant.jpg",1200,800);
//    media[count++]=new Video("friendS1E2","Friends-102.mkv",23);
//    media[count++]=new Photo("violetFlower","$HOME/inf224/violetFlower.jpg",1024,760);
//    media[count++]=new Video("friendS1E2","Friends-102.mkv",22);
//    media[count++]=new Photo("lotus","$HOME/inf224/lotus.jpg",1600,900.3);
//    ofstream fb("try.txt");
//    if (fb){
//        for(int i=0;i<5;++i){
//            media[i]->displayInfo(fb);
//            media[i]->play();
//        }
//    }

//****** 6eme etage
//    int* tab=new int[2]();
//    tab[0]=60;
//    tab[1]=62;
//    Film *movie=new Film("Inception","inception.mkv",122,2,tab);
//    ofstream fb("try.txt");
//    if (fb) movie->displayInfo(fb);
//    cout<<"Nombre de chapitre: "<<movie->getChapterCnt()<<endl;
//    const int *durationOld=movie->getChapters();
//    cout<<"Duree des chapitres: ";
//    for(int i=0;i<2;++i){
//        cout<<durationOld[i]<<' ';
//    }
//    cout<<endl;
//    delete[] tab;
//    tab=nullptr;
//    delete[] durationOld;  // double free!! /* const int* Film::getAllChapterDuration() const{return chapDuration;}; */
//    durationOld=nullptr;
//    tab=new int[2]();
//    tab[0]=52;
//    tab[1]=70;
//    movie->changeChapters(tab,2);
//    cout<<"Nombre de chapitre: "<<movie->getChapterCnt()<<endl;
//    const int* durationNew=movie->getChapters();
//    cout<<"Duree des chapitres: ";
//    for(int i=0;i<2;++i){
//        cout<<durationNew[i]<<' ';
//    }
//    cout<<endl;

//    delete movie;
//    delete[] tab;
//    delete[] durationNew;
//    tab=new int[3]();
//    tab[0]=32;
//    tab[1]=28;
//    tab[2]=33;
//    movie=new Film("Dodoro","Dodoro.mkv",93,3,tab);
//    cout<<"Nombre de chapitre: "<<movie->getChapterCnt()<<endl;
//    durationNew=movie->getChapters();
//    cout<<"Duree des chapitres: ";
//    for(int i=0;i<3;++i){
//        cout<<durationNew[i]<<' ';
//    }
//    cout<<endl;

//****** 7eme etage
//    cout<<"------------------"<<endl;
//    delete[] durationNew;
//    durationNew=nullptr;

//    Film mv1=*movie;
//    cout<<"nombre de chapitre: "<<mv1.getChapterCnt()<<endl;
//    const int* durationCopy1=mv1.getChapters();
//    cout<<"Duree de chapitre: ";
//    for(int i=0;i<3;++i){
//        cout<<durationCopy1[i]<<' ';
//    }
//    cout<<endl;

//    Film mv2(*movie);
//    cout<<"nombre de chapitre: "<<mv2.getChapterCnt()<<endl;
//    const int* durationCopy2=mv2.getChapters();
//    cout<<"Duree de chapitre: ";
//    for(int i=0;i<3;++i){
//        cout<<durationCopy2[i]<<' ';
//    }
//    cout<<endl;

//****** 8eme etape
//    Photo* photo1 = new Photo("plant","$HOME/inf224/plant.jpg",1200,800);
//    Photo* photo2 = new Photo("violetFlower","$HOME/inf224/violetFlower.jpg",1024,760);
//    Photo* photo3 = new Photo("lotus","$HOME/inf224/lotus.jpg",1600,900.3);
//    Video* video1 = new Video("friend","Friends-102.mkv",23);
//    Video* video2 = new Video("friend","Friends-102.mkv",23);
//    int* tab=new int[2]();
//    tab[0]=10;
//    tab[1]=12;
//    Film* film1 = new Film("friend","Friends-102.mkv",22,2,tab);
//    Film* film2 = new Film("friend","Friends-102.mkv",22,2,tab);


//    cout<<"G1"<<endl;
//    string G1name="plantPictures";
//    Group<Photo*> G1(G1name);
//    G1.push_back(photo1);
//    G1.push_back(photo2);
//    G1.push_back(photo3);
//    cout<<G1.getGroupName()<<endl;
//    ofstream f("groupInfo.txt");
//    if (f) G1.printEachAttr(f);
//    f<<endl;

//    cout<<"G2"<<endl;
//    string G2name="videos";
//    Group<Video*> G2(G2name);
//    G2.push_back(video1);
//    G2.push_back(video2);
//    cout<<G2.getGroupName()<<endl;
//    if (f) G2.printEachAttr(f);
//    f<<endl;

//    cout<<"G3"<<endl;
//    string G3name="films";
//    Group<Film*> G3(G3name);
//    G3.push_back(film1);
//    G3.push_back(film2);
//    cout<<G3.getGroupName()<<endl;
//    if (f) G3.printEachAttr(f);
//    f<<endl;

//    cout<<"G4"<<endl;
//    string G4name="mixed";
//    Group<Multimedia*> G4(G4name);
//    G4.push_back(film1);
//    G4.push_back(photo1);
//    G4.push_back(video2);
//    cout<<G4.getGroupName()<<endl;
//    if (f) G4.printEachAttr(f);
//    f<<endl;

 //****** 9eme etape
//    shared_ptr<Photo> p1(new Photo("plant","$HOME/inf224/plant.jpg",1200,800));
//    shared_ptr<Photo> p2(new Photo("violetFlower","$HOME/inf224/violetFlower.jpg",1024,760));
//    shared_ptr<Photo> p3(new Photo("lotus","$HOME/inf224/lotus.jpg",1600,900.3));
//    shared_ptr<Video> v1(new Video("friend","Friends-102.mkv",23));
//    shared_ptr<Video> v2(new Video("friend","Friends-102.mkv",23));


//    cout<<"G5"<<endl;
//    string G5name="pictures";
//    Group<shared_ptr<Photo>> *G5 = new Group<shared_ptr<Photo>>(G5name);
//    G5->push_back(p1);
//    G5->push_back(p2);
//    G5->push_back(p3);


//    cout<<"G6"<<endl;
//    string G6name="videos";
//    Group<shared_ptr<Video>> *G6 = new Group<shared_ptr<Video>>(G6name);
//    G6->push_back(v1);
//    G6->push_back(v2);


//    cout<<"G7"<<endl;
//    string G7name="mixed";
//    Group<shared_ptr<Multimedia>> *G7 =new Group<shared_ptr<Multimedia>>(G7name);
//    G7->push_back(v1);
//    G7->push_back(p2);
//    G7->push_back(p3);
//    G7->push_back(v2);
//    G7->push_back(p1);

//    delete G6;
//    delete G7;
//    v1.reset();
//    v2.reset();

//    delete G5;
//    p1.reset();
//    p2.reset();
//    p3.reset();


//****** 10eme etape 
    MultimediaManager<P> *manager = new MultimediaManager<P>();
    manager->addPhoto("plant","/cal/homes/dlu/Desktop/LU_Dongrui/cpp/plant.jpg",1200,800);
    manager->addVideo("friend","/cal/homes/dlu/Desktop/LU_Dongrui/cpp/Friends-102.mkv",23);
    int* tab=new int[2]();
    tab[0]=10;
    tab[1]=12;
    manager->addFilm("friend", "Friends-102.mkv", 22, 2, tab);
  //  stringstream os;
  //  manager->playMultimediaItem("plant", os);
  //  os.clear();
  //  manager->playMultimediaItem("friend", os);

    shared_ptr<Photo> item1(new Photo("violetFlower","cal/homes/dlu/Desktop/LU_Dongrui/cpp/violetFlower.jpg",1024,760));
    shared_ptr<Photo> item2(new Photo("lotus","cal/homes/dlu/Desktop/LU_Dongrui/cpp/lotus.jpg",1600,900.3));
    shared_ptr<Video> item3(new Video("friend","/cal/homes/dlu/Desktop/LU_Dongrui/cpp/Friends-102.mkv",23));
    
    list<shared_ptr<Multimedia>> g;
    g.push_back(item1);
    g.push_back(item2);
    g.push_back(item3);
    manager->addGroup("collection", g);

    manager->addVideo("friend","/cal/homes/dlu/Desktop/LU_Dongrui/cpp/Friends-102.mkv",23);
    manager->addPhoto("violetFlower","/cal/homes/dlu/Desktop/LU_Dongrui/cpp/violetFlower.jpg",1024,760);
    manager->addPhoto("lotus","/cal/homes/dlu/Desktop/LU_Dongrui/cpp/lotus.jpg",1600,900.3);

 
    stringstream res;
    manager->findMultimediaItem("collection",res);
    cout<<res.str();

    res.clear();
    manager->findMultimediaItem("plant",res);
    cout<<res.str();

//    res.clear();
//    manager->playMultimediaItem("friend", res);



//****** 11eme etape
      static const int PORT = 3331;
      // cree le TCPServer
      shared_ptr<TCPServer> server(new TCPServer());

      // cree l'objet qui gère les données
      shared_ptr<MultimediaManager<P>> base(new MultimediaManager<P>());

      // le serveur appelera cette méthode chaque fois qu'il y a une requête
      server->setCallback(*base, &MultimediaManager<P>::processRequest);

      // lance la boucle infinie du serveur
      cout << "Starting Server on port " << PORT << endl;
      int status = server->run(PORT);

      // en cas d'erreur
      if (status < 0) {
        cerr << "Could not start Server on port " << PORT << endl;
        return 1;
      }

    return 0;
}


