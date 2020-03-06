#include "video.h"
#include <string>
#include <iostream>

Video::Video(string name,string path, int timeLength):Multimedia (name, path){
    duration=timeLength;
};

int Video::getDuree() const{
    return duration;
}

void Video::setDuree(int newDuration){
    duration=newDuration;
}

void Video::displayInfo(ostream& o) const{
    o<<"Media type: video"<<endl;
    Multimedia::displayInfo(o);
    o<<"Media's duration: "<<getDuree()<<endl;
}

void Video::play() const{
    string command= "mpv "+ nomDir+" &";
    system(command.c_str());
}

Video::~Video() {
    std::cout<<"Video "<<nom<<" is about to be deleted."<<std::endl;
}
