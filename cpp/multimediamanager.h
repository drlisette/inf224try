#ifndef MULTIMEDIAMANAGER_H
#define MULTIMEDIAMANAGER_H
#include "group.h"
#include "multimedia.h"
#include <map> 
#include "photo.h"
#include "video.h"
#include "film.h"
#include <memory>
#include <string>
#include <iostream>
#include <sstream>
#include "tcpserver.h"
#include <algorithm>


typedef std::shared_ptr<Multimedia> T; 
typedef map<string, T>::const_iterator itMedia;
typedef map<string, Group<T>>::const_iterator itGroup;

using namespace std;
using namespace cppu;


template <typename T>
class MultimediaManager: public Group<T>{
private:
    map<string, Group<T>> groupTab;
    map<string, T> mediaObjectTab;
    static const int PORT = 3331;
    
public:
    MultimediaManager(){}
    
    // creer un groupe et l'ajouter dans la table
    void addGroup(string name, list<T> objs){
        Group<T> mediaGroup(name);
        for(auto item:objs)
            mediaGroup.push_back(item);
        groupTab[mediaGroup.getGroupName()] = mediaGroup;
    }
    
    // creer une photo et l'ajouter dans la table
    void addPhoto(string name, string path, double width, double length){
        T newPhoto(new Photo(name, path, width, length));
        mediaObjectTab[newPhoto->getNom()] = newPhoto;
    }
    
    // creer une video et l'ajouter dans la table
    void addVideo(string name, string path, int timeLength){
        T newVideo(new Video(name, path, timeLength));
        mediaObjectTab[newVideo->getNom()] = newVideo;
    }
    
    // creer un film et l'ajouter dans la table
    void addFilm(string name,string path, int timeLength,
                      unsigned long chapCnt, const int* chaps){
        T newFilm(new Film(name, path, timeLength, chapCnt, chaps));
        mediaObjectTab[newFilm->getNom()] = newFilm;
    }
    
    // rechercher et afficher un objet multimedia ou un groupe
    // s'il n'existe pas, afficher un message d'alerte dans le terminal 
    void findMultimediaItem(string name, ostream& os) const{
        itGroup objGroupPtr = groupTab.find(name);
        itMedia objMediaPtr = mediaObjectTab.find(name);

        if(objGroupPtr != groupTab.end()){
            os<<"Group name: "<<name<<endl;
            objGroupPtr->second.printEachAttr(os);
        }
        else if(objMediaPtr != mediaObjectTab.end()){
            objMediaPtr->second->displayInfo(os);
        }
        else{
            os<<"No media item/group "<<name<<endl;
        }
    }
    
    // jouer un objet multimedia si le trouve
    // sinon afficher un message d'alerte dans le terminal 
    void playMultimediaItem(string name,  ostream& os) const{
        itMedia objMediaPtr = mediaObjectTab.find(name);
        if(objMediaPtr != mediaObjectTab.end())
            objMediaPtr->second->play();
        else
            os<<"No media item "<<name<<endl;
    }

    bool processRequest(TCPConnection& cnx, const string& request, string& response){
        cerr << "\nRequest: '" << request << "'" << endl;
        stringstream ss(request);

        // serveur reconnait seulement 2 types de commande:
        // "find xxx" ou "play xxx" ou "quit"
        // commandes et noms separes par un espace
        string command; // command, either 'find' or 'play'
        string name; // media name

        TCPLock lock(cnx);

        ss>>command>>name;


        ss.clear();
        if(command.compare(string("find"))==0){
            findMultimediaItem(name, ss);
            response = ss.str();
        }
        else if(command.compare(string("play"))==0){
            playMultimediaItem(name, ss);
            response = ss.str();
        }
        else if(command.compare(string("quit"))==0)
            return false;
        else{
            response = "Request not understood.";
        }

        replace(response.begin(),response.end(),'\n',';');
        cerr << "response: " << response << endl;
         // renvoyer false si on veut clore la connexion avec le client
        return true;
    }
    
    ~MultimediaManager(){}
};

#endif // MULTIMEDIAMANAGER_H
